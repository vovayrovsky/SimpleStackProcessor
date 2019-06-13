
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name FPGA -dir "C:/Users/KekKuLe/Desktop/temp/Code/SSP/SimpleStackProcessor/FPGA/planAhead_run_2" -part xc6slx16csg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/KekKuLe/Desktop/temp/Code/SSP/SimpleStackProcessor/FPGA/top.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/KekKuLe/Desktop/temp/Code/SSP/SimpleStackProcessor/FPGA} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "top.ucf" [current_fileset -constrset]
add_files [list {top.ucf}] -fileset [get_property constrset [current_run]]
link_design
