################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
enet_uip.obj: ../enet_uip.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me -O2 --include_path="F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/include" --include_path="F:/ccsWorkspace/enet_uip" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/examples/boards/ek-tm4c1294xl" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/uip-1.0" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/uip-1.0/uip" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/uip-1.0/apps" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/utils" -g --gcc --define=ccs="ccs" --define=PART_TM4C1294NCPDT --define=TARGET_IS_TM4C129_RA0 --define=DEBUG_OUTPUT --define=UIP_OFFLOAD_ICMP_CHKSUM --display_error_number --diag_warning=225 --diag_wrap=off --gen_func_subsections=on --ual --preproc_with_compile --preproc_dependency="enet_uip.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

startup_ccs.obj: ../startup_ccs.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me -O2 --include_path="F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/include" --include_path="F:/ccsWorkspace/enet_uip" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/examples/boards/ek-tm4c1294xl" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/uip-1.0" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/uip-1.0/uip" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/uip-1.0/apps" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/utils" -g --gcc --define=ccs="ccs" --define=PART_TM4C1294NCPDT --define=TARGET_IS_TM4C129_RA0 --define=DEBUG_OUTPUT --define=UIP_OFFLOAD_ICMP_CHKSUM --display_error_number --diag_warning=225 --diag_wrap=off --gen_func_subsections=on --ual --preproc_with_compile --preproc_dependency="startup_ccs.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


