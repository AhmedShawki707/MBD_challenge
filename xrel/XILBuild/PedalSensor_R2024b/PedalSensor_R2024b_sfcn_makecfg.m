function PedalSensor_R2024b_sfcn_makecfg(BuildInfo)
%PEDALSENSOR_R2024B_SFCN_MAKECFG adds include and source directories to the BuildInfo object.

%    Simulink version    : 24.2 (R2024b) 21-Jun-2024
%    MATLAB file generated on : 10-Mar-2025 18:53:30

% Verify the Simulink version
verify_simulink_version();

% Get the current directory
currDir = pwd;

% Get the MATLAB search path, remove the toolbox sub-directories except LCT demos
matlabPath = legacycode.lct.util.getSearchPath();

% Declare cell arrays for storing the paths
allIncPaths = {};
allSrcPaths = {};

% Get the build type
isSimTarget = is_simulation_target();
% Get the serialized paths information
info = get_serialized_info();

% Call the helper
pathInfo = legacycode.lct.util.resolvePaths(info, isSimTarget==1, currDir, matlabPath);

% Concatenate known include and source directories
allIncPaths = RTW.uniquePath([allIncPaths pathInfo.IncPaths(:)']);
allSrcPaths = RTW.uniquePath([allSrcPaths pathInfo.SrcPaths(:)']);

% Additional include directories
addIncludePaths(BuildInfo, correct_path_name(allIncPaths));

% Additional source directories
addSourcePaths(BuildInfo,  correct_path_name(allSrcPaths));

%% ------------------------------------------------------------------------
function info = get_serialized_info()

% Allocate the output structure array
info(1:1) = struct(...
    'SFunctionName', '',...
    'IncPaths', {{}},...
    'SrcPaths', {{}},...
    'LibPaths', {{}},...
    'SourceFiles', {{}},...
    'HostLibFiles', {{}},...
    'TargetLibFiles', {{}},...
    'singleCPPMexFile', false,...
    'Language', ''...
    );

info(1).SFunctionName = 'PedalSensor_R2024b_sfcn';
info(1).IncPaths = {'D:\MBD_challenge', 'D:\MBD_challenge\PedalSensor_ert_rtw'};
info(1).SrcPaths = {'D:\MBD_challenge', 'D:\MBD_challenge\PedalSensor_ert_rtw'};
info(1).SourceFiles = {'PedalSensor.c'};
info(1).Language = 'C';

%% ------------------------------------------------------------------------
function verify_simulink_version()

% Retrieve Simulink version
slVerStruct = ver('simulink');
slVer = str2double(strsplit(slVerStruct.Version,'.'));
% Verify that the actual platform supports the function used
if slVer(1)<8 || (slVer(1)==8 && slVer(2)<7)
    DAStudio.error('Simulink:tools:LCTErrorBadSimulinkVersion', slVerStruct.Version)
end

%% ------------------------------------------------------------------------
function pathSet = correct_path_name(pathSet)

for ii = 1:numel(pathSet)
    pathSet{ii} = coder.make.internal.transformPaths(pathSet{ii});
end
pathSet = RTW.uniquePath(pathSet);

%% ------------------------------------------------------------------------
function isSimTarget = is_simulation_target()

% Default output value
isSimTarget = 0;

% Get the current model and the code generation type to decide
% if we must link with the host libraries or with the target libraries
try
    modelName = get_param(0, 'CurrentSystem');
    if ~isempty(modelName)
        modelName = bdroot(modelName);
        sysTarget = get_param(modelName, 'RTWSystemTargetFile');
        isSimTarget = ~isempty([strfind(sysTarget, 'rtwsfcn') strfind(sysTarget, 'accel')]);

        mdlRefSimTarget = get_param(modelName,'ModelReferenceTargetType');
        isSimTarget = strcmpi(mdlRefSimTarget, 'SIM') || isSimTarget;

        % Verify again it's not Accelerator
        if ~isSimTarget
            simMode = get_param(modelName, 'SimulationMode');
            simStat = get_param(modelName, 'SimulationStatus');
            isSimTarget = strcmp(simStat, 'initializing') & strcmp(simMode, 'accelerator');
        end
    end
catch
end
