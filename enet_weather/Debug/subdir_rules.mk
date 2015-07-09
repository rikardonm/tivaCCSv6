################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
commands.obj: ../commands.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me -O2 --include_path="F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/include" --include_path="F:/ccsWorkspace/enet_weather" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/examples/boards/ek-tm4c1294xl" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/src/include" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/src/include/ipv4" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/apps" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/ports/tiva-tm4c129/include" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party" -g --gcc --define=ccs="ccs" --define=PART_TM4C1294NCPDT --define=TARGET_IS_TM4C129_RA0 --define=LWIP_1_4_1 --define=USE_HTTP_1_0 --define=UART_BUFFERED --display_error_number --diag_warning=225 --diag_wrap=off --gen_func_subsections=on --ual --preproc_with_compile --preproc_dependency="commands.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

enet_weather.obj: ../enet_weather.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me -O2 --include_path="F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/include" --include_path="F:/ccsWorkspace/enet_weather" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/examples/boards/ek-tm4c1294xl" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/src/include" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/src/include/ipv4" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/apps" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/ports/tiva-tm4c129/include" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party" -g --gcc --define=ccs="ccs" --define=PART_TM4C1294NCPDT --define=TARGET_IS_TM4C129_RA0 --define=LWIP_1_4_1 --define=USE_HTTP_1_0 --define=UART_BUFFERED --display_error_number --diag_warning=225 --diag_wrap=off --gen_func_subsections=on --ual --preproc_with_compile --preproc_dependency="enet_weather.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

eth_client.obj: ../eth_client.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me -O2 --include_path="F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/include" --include_path="F:/ccsWorkspace/enet_weather" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/examples/boards/ek-tm4c1294xl" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/src/include" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/src/include/ipv4" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/apps" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/ports/tiva-tm4c129/include" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party" -g --gcc --define=ccs="ccs" --define=PART_TM4C1294NCPDT --define=TARGET_IS_TM4C129_RA0 --define=LWIP_1_4_1 --define=USE_HTTP_1_0 --define=UART_BUFFERED --display_error_number --diag_warning=225 --diag_wrap=off --gen_func_subsections=on --ual --preproc_with_compile --preproc_dependency="eth_client.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

images.obj: ../images.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me -O2 --include_path="F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/include" --include_path="F:/ccsWorkspace/enet_weather" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/examples/boards/ek-tm4c1294xl" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/src/include" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/src/include/ipv4" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/apps" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/ports/tiva-tm4c129/include" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party" -g --gcc --define=ccs="ccs" --define=PART_TM4C1294NCPDT --define=TARGET_IS_TM4C129_RA0 --define=LWIP_1_4_1 --define=USE_HTTP_1_0 --define=UART_BUFFERED --display_error_number --diag_warning=225 --diag_wrap=off --gen_func_subsections=on --ual --preproc_with_compile --preproc_dependency="images.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

json.obj: ../json.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me -O2 --include_path="F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/include" --include_path="F:/ccsWorkspace/enet_weather" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/examples/boards/ek-tm4c1294xl" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/src/include" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/src/include/ipv4" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/apps" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/ports/tiva-tm4c129/include" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party" -g --gcc --define=ccs="ccs" --define=PART_TM4C1294NCPDT --define=TARGET_IS_TM4C129_RA0 --define=LWIP_1_4_1 --define=USE_HTTP_1_0 --define=UART_BUFFERED --display_error_number --diag_warning=225 --diag_wrap=off --gen_func_subsections=on --ual --preproc_with_compile --preproc_dependency="json.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

startup_ccs.obj: ../startup_ccs.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me -O2 --include_path="F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/include" --include_path="F:/ccsWorkspace/enet_weather" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/examples/boards/ek-tm4c1294xl" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/src/include" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/src/include/ipv4" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/apps" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party/lwip-1.4.1/ports/tiva-tm4c129/include" --include_path="F:/ti/TivaWare_C_Series-2.1.1.71/third_party" -g --gcc --define=ccs="ccs" --define=PART_TM4C1294NCPDT --define=TARGET_IS_TM4C129_RA0 --define=LWIP_1_4_1 --define=USE_HTTP_1_0 --define=UART_BUFFERED --display_error_number --diag_warning=225 --diag_wrap=off --gen_func_subsections=on --ual --preproc_with_compile --preproc_dependency="startup_ccs.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


