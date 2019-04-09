# HDL Coder Downstream Integration Tcl Script

set myTool "Xilinx Vivado 2017.4"
set myProject "tbcenc_fixpt_vivado"
set myProjectFile "tbcenc_fixpt_vivado.xpr"
set myTopLevelEntity "tbcenc_fixpt"

set Family "Artix7"
set Device "xc7a200tl"
set Package "fbg676"
set Speed "-2L"
set MapTimePathNumber "3"
set MapTimeAdvAnalysis "True"
set PARTimePathNumber "3"
set PARTimeAdvAnalysis "True"

# Open existing project
puts "### Open existing $myTool project \/home\/sky\/Documents\/MATLAB\/Turbo_codes\/codegen\/tbcenc\/hdlsrc\/vivado_prj\/tbcenc_fixpt_vivado.xpr"
open_project ${myProject}

# Running PostMapTiming
puts "### Running PostMapTiming in $myTool ..."
open_run synth_1
report_timing_summary -delay_type min_max -report_unconstrained -check_timing_verbose -max_paths $MapTimePathNumber -nworst $MapTimePathNumber -name timing_post_map -file timing_post_map.rpt
source -quiet "/usr/local/MATLAB/R2018b/toolbox/hdlcoder/hdlcommon/+downstreamtools/extractVivadoTiming.tcl"
extracTimingReport ${myTopLevelEntity}_preroute.tvr
puts "### PostMapTiming Complete."

# Close project
puts "### Close $myTool project."
close_project

