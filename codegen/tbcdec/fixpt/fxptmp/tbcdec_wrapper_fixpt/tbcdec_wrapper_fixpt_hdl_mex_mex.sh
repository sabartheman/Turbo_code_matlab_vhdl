MATLAB="/usr/local/MATLAB/R2018b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/sky/.matlab/R2018b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for tbcdec_wrapper_fixpt_hdl_mex" > tbcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "CC=$CC" >> tbcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "CFLAGS=$CFLAGS" >> tbcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "CLIBS=$CLIBS" >> tbcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> tbcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> tbcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "CXX=$CXX" >> tbcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> tbcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXLIBS=$CXXLIBS" >> tbcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> tbcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> tbcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "LDFLAGS=$LDFLAGS" >> tbcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> tbcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> tbcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "Arch=$Arch" >> tbcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "LD=$LD" >> tbcdec_wrapper_fixpt_hdl_mex_mex.mki
echo OMPFLAGS= >> tbcdec_wrapper_fixpt_hdl_mex_mex.mki
echo OMPLINKFLAGS= >> tbcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "EMC_COMPILER=gcc" >> tbcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "EMC_CONFIG=optim" >> tbcdec_wrapper_fixpt_hdl_mex_mex.mki
"/usr/local/MATLAB/R2018b/bin/glnxa64/gmake" -j 1 -B -f tbcdec_wrapper_fixpt_hdl_mex_mex.mk
