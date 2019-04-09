/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_tbcenc_wrapper_fixpt_hdl_mex_info.c
 *
 * Code generation for function '_coder_tbcenc_wrapper_fixpt_hdl_mex_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "tbcenc_fixpt_logger.h"
#include "tbcenc_wrapper_fixpt.h"
#include "_coder_tbcenc_wrapper_fixpt_hdl_mex_info.h"

/* Function Definitions */
mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[6] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs", "FullPath", "TimeStamp" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 2, 6, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 2);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString(
    "tbcenc_wrapper_fixpt"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (3.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/tbcenc_wrapper_fixpt.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (737523.66230324074));
  xInputs = emlrtCreateLogicalMatrix(1, 0);
  emlrtSetField(xEntryPoints, 1, "Name", emlrtMxCreateString(
    "tbcenc_fixpt_logger"));
  emlrtSetField(xEntryPoints, 1, "NumberOfInputs", emlrtMxCreateDoubleScalar(0.0));
  emlrtSetField(xEntryPoints, 1, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (1.0));
  emlrtSetField(xEntryPoints, 1, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 1, "FullPath", emlrtMxCreateString(
    "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"));
  emlrtSetField(xEntryPoints, 1, "TimeStamp", emlrtMxCreateDoubleScalar
                (737523.66670138889));
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.5.0.944444 (R2018b)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[29] = {
    "789ced5dcd7322c7159f756c675d8e6daad6499cca21bb8eb395d82e0d426241a9da0a02814046420204489b2c1a860606e68b9941025dc231871c72f42155d1"
    "d195c455bec5b9295539e498723e5c954a55f2272407dfc330335a66421b56d334307457ed36cd63fad7f3f4fad7dd6fbadf507752fb77288a7a7df0ef8b9f52",
    "54e465bd4451af5146f299f90b943d39e577ccfc7d47d94a2f512fdaaebb63e2fdd22cb392a881ae6614784e04071da102944141640470534d5512389111b57c"
    "4f06940254893f07d5a1a4c6f120cf09202d8d1492dca02024464437055da47f8e3500dbca75044a69a8cf9acb8f1628533f7aba86dcff8b53eae70ca21f9f43",
    "fe24fe13ba210980565b3d7a47623b02103595dedfcea7b7a374bea354a4322b55814aebffd781486b1516882c5de3bab26616ca170a23cb40290fbf5c131ed4"
    "8136f82c305ae375079eb3bd2f4f793fcedc4aaf5077474aeb914978d3eaef654799baf99d2131eeeed9dfcb2dde8b8ef2333c43c23618dd486ff03e72891785",
    "e2d9e54f52e9d2c0443aaa42f312cbf096656403fef57085d62489af485d1a083ccd7315dd2a4055963851a30d0dad09463df8ece0fab7c56ffd6d1bafdde1bc"
    "bff9e27521f54d6b77df80e0f91cf21ebb9f389183ebd592d64a774ab2562a0441fc593b0e27e04c6a070529e3aaff53c8f5d3eaf11852bfcf219f09bf8fdc87",
    "0c69e7b4f6f782a36ca5571cbf37d2db1123bf8f8ce7bf0ac1f799921a57e6049977cdf3ce04fbbb590915cfc726e05972373c3fd49049f4f87829127bd8ff3b"
    "e1f919e1e1e2f99a1c4877d3073b5d966fe6f84a389b6182c731eff03ce9bff664b3b77e0a198fdf7594a99bdf19124e5565465101aef54155ea547880ce0e92",
    "503cbbfc39ed603045e7990aadeba6d611694b4b6b02461ebffbf829e1f165e7f18b624a4df0ad4222505372fc7933b3275e1e111e273c6ee6b3e271d8fa635a"
    "bc37a0787639102aa05a05d535d3f143787d7cbb09afe3c123bc8ea67ec2ebf664b3b7c8610415cfbee628538edf59724e153b02503856d39fbca0f3af3fef7c",
    "fd13977829289e5d7e7bbbb069ca72b3e3b48f8f899f7df9f97d77a3d5cbb5eb1c1fcbc75ad976b49e6f1dc777bcc3ef6efbf13ea47e9f438e80df1f0c3e3500"
    "2f0f9f46cfc5bf7e5f8e185fb623a8ecf0eb107c9f43ae3f7d50d606fa008ac8f06b3c10ebfae3d5a5f5bbcf605eafff7b6fa827fa3d4b51b4a128acf3faa77f",
    "bc47e6f58bcafbd3f6b77cba70ba25544bca767133d45ddf2808fe830f28c2fb2bc9fb7e93f7efa3e3fd3721f83e877ca098f2e0fe597d77544d52584954879b"
    "b316c5bfe3d68e0e1d6527be25bfbd1d8dd320cef180ecb799251eae75402711ca47639d7c389b2916fd329f5592c562828c072b391e1c9ae3c1d9b3f1e00c52",
    "3faafd8d9c5ad3f7d0cecddf73e5122f02c5b3cbddf87b6a1c4e5ea73efde21f84d7979dd7733d991382ed6c719dab543753a74787fbebe71ef2ef5c41ae5fe1"
    "7e3b487ecff8ed9f775fbcdb719ef8ed91e30dd3aae011bf3d9afa977dbe7e06691f52bbbbafccdb5f239a748fccfea76f87e9afb10f3bcbebb7118de180f86d",
    "bc81876b1c08492d099c142abbb174f1329addbe38daba8cee7a671cf0ca39a933483bd1dadf3bc8e6fd5f83e0f91c72f3c68737ac9751e1bf3a01df928ff8ed"
    "a9517c6cf3072476330f7bb9fefd7fdefd9cf0ff8cf0703dc7cd94e249fe3206764fa38d70fbf438ad0592a3ebef55e7ff12a47e9f438eb41fcf2bfe41e498c4",
    "3f98128fc43f408567a455c123f10fd0d4bfecf3b32b48fba6b53bd83927eb796c64f4cb7edc2cc68cbc1f35cb1b661e36f3b49987cc7c8bc449988067d5efdd"
    "731c244ec22cf1489c0434f5631b0f96d9dfff6779defe7ea028926d1e4efcfdb7f4f70f3589d5dfffd9f7e27f25e3c08cf0708d036cf59cf3ef33c7cca65f66",
    "a3b2b253e0374b51320e2ccabaa00f69dfb47607f38358eb82fba35ff63f88181facdc5c27f47790cdfbbf02698fcf94748de16061fcfe572ef17f3401df92df"
    "2e1e8324ab7457a77d8c3cd5ffe75340fc41cbcefb9785d4de5eb355bb50d765b69de5157f31b5e1a1f9ff15e4fad5edb77a7a3f32695c99563ff721783e87dc",
    "710e571da80874e59824c88cc65578647177dcf2bcdbe742b909f896dcedf9dcff53207eff0f39af3b433c5cfcdfa8caca69e932ced6433be9506fa3c36c1f85"
    "3d34efbf825cbfdafcef47368f9fe4bfe7a53a3750c7c2cce3ddf2fbd1047c4b7e7b7f4ec46a3a1da971b4a9bf79ece727cf7b6788872dceda412e9c6db6b6ce",
    "a576c8cf7385ada343504f7a87df497f1e9f5b6956ef31819dfbf59912d17ce7cda2f0be5bff5f7a02be25476527a239a1c7e8cff9b84ecee52e2cdf4fbb6f33"
    "b4973b504f8a5c9deb6d7602a020c4346e83f20edf937e3cbefd76bb7b48fc3bc4bff3a5f741fc3bf3c523fe1d34f52ffb78f021a47dd3da1dccff623dd70d8f",
    "7ed94f468c0f0923efc7ccf2969907ccfcb1996fcf2d4ecfbcc7892b97f89109f8967c89e27f90b83d33c423717bd0d47f05b97e85fb2db548717bbcb2af93c4"
    "f3418e374cab8247e2f9a0a97fd9e7ff6790f6a1b5bb2d64fc3f6dfc064e1d7a30aa4ede9df7bcdeadffa73001df92a3b297513dea96439eff7a030fd7f300b0",
    "1f1253caa5c855767bcd5838ba9fde38ea51dee17fd29fc7e756b2dbdff7b1edfbd1573903157886f771ef1330f547f6fd780c0fd7bcff3cae0562623a78bc7b"
    "2237e54eb6570a5e643cb4af7fd9e7fd303b98d6ee60e7a72cbfff5ba35f5a7eff1b7fffe3b9f9f5dde291f8fb5fde5ee2c79f2f1ef1e3a3a97fd9f9fd0cd23e",
    "b47697994bdc067ded5256002fc965e4efd5723bcfbf7689ff7402be25476537e3f489775d78fd1b32df5ffef12058ac64d42375436393ede6d636d8ded0f60b"
    "1edae7730db99ef46b7bb2db61185bbc0686e787f9bcce955db9c49bfd39bf8186f0c667f884f0faf2f3fa494869b37b07d5f328d76502c13473226d563de4c7",
    "b9825cbfbafd564f6f23dbbfff1d089ecf2177ecdfe7d46887e3b5947860ec41991bafbbf5db67a17876b9dbfdfa4e85e18fcfdcff1df1eb2c3fdf67cedbb1ed"
    "5af23c9c3fdaecb171410c244e790f9dd7bd825cbfda7cffecb9ac5b3bfb2604cfe7903bf87e70d319655bec21e379dcef57dc83e2d9e56e79de52147e7ea72e",
    "0275721e6bd9f93dbc5f11eacde4a3ca793b28e68b8176e692e33d349fbf865c3fad1e4f20f5fb1c7274fdf801a7e664c0720c1f1764ade7b89f33487b91dae1"
    "bfabc8fc34b0f8ff3e53c2a9aacc282a98d77cde6d3cfd2414cf2ebfddf8afeba6d611694b4b389fcb46ee3e7e4af87dd9f9fda29852137cab9008d4941c7fde",
    "ccec89974784df579bdf2300e3be4bd0ee30eedf9762d5ffbcfb6ddcf27b1c8a6797df8edf013ff8409b3ac2fc5ec4c8671ffd9cf0fba2f2fbb4fbe9f7e4cbf5"
    "7628533d3e59e703200b8aa7dac616e51d7e27fdd79eecf6761fd9392ad8dfc5e7c8f5e7c8e6fd96594941366f7f5e5e77eb872f42f1ec72dd2e0e6f6b18b2c2",
    "9d331aa09d4ac3eacf8b7c48787e71797eea73b3c1ed2e970d35cffdc7ed47fe8d587d3f1b7be4a1fd34a43f8fcfad342bfffc5b8e32e5f89d2577f8e74546a9"
    "7322db68b9e57f6782b5c34a0b7ace4e6d300aa8d2c6aacf5cfb399780373ac3bbefaa7fef8759f23eac65e7ff5ef722b5c5246af5a09fcdc4a55c33d1095d78",
    "e83db95ee9cf58cf51510f2346febe99bf8dccaff312a41d3e5352e325699af7422eaa5f27e628538edf59f2dbae0b75affd5047d8e364527f387e48f6dd2c3b"
    "df87dba14cbecdef045bd146fe6837a7b57776d88477f89ef45f7b82f975fa90fa9675bf256e3f0fd96f392b3c23ad0a1ed96f89a67ec2fbf664b7b77790f1fe",
    "b721783e877c4c9c7c4659b366f7eee7f7ce34ad7fe7935be259f56726e05972b7bcff9ea1b11b9bc1c8f7bf26e7a9969fef2b8d47872591d7aa39498877c4e4"
    "46251edddb257cbf6a7cff0b487dd3eae907103c9f43eedc672fcb7c2f37a4b0444764354e1253e221cfb0e6ebb290c551786342fb2c79cd6c45b9c188d5c142",
    "00d53eaf1f4fc0b7e4aef77941158a3b1ec775e5d52679eebbece383c4a49b1586d98d5537c24db51400fba772cf437175ae21d7937e6d4fb0f7a5c3f016757f"
    "3e6e3f3fd99f8f0acf48ab8247f6e7a3a9ff1a723de1777bb2dbe19ae7fc40b7e57fe2071adf7ee207c28347fc4068ea77db8f57e03cfda02b276e78ff6790fa",
    "a6d5d77721783e87dcc1fbc3b870079298e3c43a0f3449dce1a6f38b2d6abc9d19bc4f61acdd8c531ce6f87aeabf8ec97a60d9c781bd5aba13880699de8170a9"
    "b614ad5ed86af83db41e20fd797c6ea559c5cb2471188c44fc3c93f08cb42a78c4cf83a67eb7f3fb95888fdf3fc67e6e4b3faa26302d505619019459499079d0",
    "e5b41eaae7ba6ee3e3ffc9257e6502be254719477b9c3ef1af17af7f150cfd858c0b33c2c3f63ec454ae943c8c25db5a48382de4b8c3cbd2e505e59d716141f7"
    "ff8cf4ef1a57e606bd781efb7ffa2932bf9f128fccef51e1196955f0c8fc1e4dfd6ee7f7fb90fa7d0e39021e7f30f8d400bc0ca6399f8ad4eecedac8f81cf77b",
    "0c71bfdf2402c5b3cbc97b0ca178c3b42a78e43d8668ea3f835c3fab733c303cb476f22632bfca3d089ecf21d72a2c10d9f2806f64ad3c20c73ab0ef9399b75f"
    "e5da25fe9309f896fcc9809c1b920068b5d5a37724b6230051532d96ce77948a54d69fada8c3281a7520d286e6e8a1e6e8dae03f41a6c76813fb7aecfaadffbe",
    "fb39e1ef19e1617b7eda2a2641bd20ef55e430486c368ed8504ff3007fff0fa5d0be1a", ""
  };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 67160U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_tbcenc_wrapper_fixpt_hdl_mex_info.c) */
