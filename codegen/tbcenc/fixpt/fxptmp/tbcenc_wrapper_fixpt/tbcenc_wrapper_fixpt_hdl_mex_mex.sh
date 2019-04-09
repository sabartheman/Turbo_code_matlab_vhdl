MATLAB="/usr/local/MATLAB/R2018b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/sky/.matlab/R2018b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for tbcenc_wrapper_fixpt_hdl_mex" > tbcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "CC=$CC" >> tbcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "CFLAGS=$CFLAGS" >> tbcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "CLIBS=$CLIBS" >> tbcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> tbcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> tbcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "CXX=$CXX" >> tbcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> tbcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXLIBS=$CXXLIBS" >> tbcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> tbcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> tbcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "LDFLAGS=$LDFLAGS" >> tbcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> tbcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> tbcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "Arch=$Arch" >> tbcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "LD=$LD" >> tbcenc_wrapper_fixpt_hdl_mex_mex.mki
echo OMPFLAGS= >> tbcenc_wrapper_fixpt_hdl_mex_mex.mki
echo OMPLINKFLAGS= >> tbcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "EMC_COMPILER=gcc" >> tbcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "EMC_CONFIG=optim" >> tbcenc_wrapper_fixpt_hdl_mex_mex.mki
"/usr/local/MATLAB/R2018b/bin/glnxa64/gmake" -j 1 -B -f tbcenc_wrapper_fixpt_hdl_mex_mex.mk
