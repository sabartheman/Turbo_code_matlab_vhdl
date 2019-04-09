# HDL Coder Downstream Integration Tcl Script

set myTool "Xilinx Vivado 2017.4"
set myProject "tbcdec_fixpt_vivado"
set myProjectFile "tbcdec_fixpt_vivado.xpr"
set myTopLevelEntity "tbcdec_fixpt"

set Family "Artix7"
set Device "xc7a200tl"
set Package "fbg676"
set Speed "-2L"
set MapTimePathNumber "3"
set MapTimeAdvAnalysis "True"
set PARTimePathNumber "3"
set PARTimeAdvAnalysis "True"

# Open existing project
puts "### Open existing $myTool project \/home\/sky\/Documents\/MATLAB\/Turbo_codes\/codegen\/tbcdec\/hdlsrc\/vivado_prj\/tbcdec_fixpt_vivado.xpr"
open_project ${myProject}

# Running Synthesis
puts "### Running Synthesis in $myTool ..."
if { [llength [get_runs synth_1] ] > 0 } { reset_run synth_1}
launch_runs synth_1 -force
wait_on_run synth_1
puts "### Synthesis Complete."

# Close project
puts "### Close $myTool project."
close_project

