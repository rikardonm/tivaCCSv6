################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
third_party/lwip-1.4.1/apps/httpserver_raw/httpd.obj: F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/apps/httpserver_raw/httpd.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me -O2 --include_path="F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/include" --include_path="F:/GitHub/tivaCCSv6/enet_io" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/examples/boards/ek-tm4c1294xl" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/src/include" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/src/include/ipv4" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/apps" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/ports/tiva-tm4c129/include" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party" -g --gcc --define=ccs="ccs" --define=PART_TM4C1294NCPDT --define=TARGET_IS_TM4C129_RA0 --display_error_number --diag_warning=225 --diag_wrap=off --gen_func_subsections=on --ual --preproc_with_compile --preproc_dependency="third_party/lwip-1.4.1/apps/httpserver_raw/httpd.pp" --obj_directory="third_party/lwip-1.4.1/apps/httpserver_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


