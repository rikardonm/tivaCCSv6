################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2

ORDERED_OBJS += \
"./enet_uip.obj" \
"./startup_ccs.obj" \
"./utils/uartstdio.obj" \
"./utils/ustdlib.obj" \
"./third_party/uip-1.0/uip/uip.obj" \
"./third_party/uip-1.0/uip/uip_arp.obj" \
"./third_party/uip-1.0/uip/uip_timer.obj" \
"./third_party/uip-1.0/apps/httpd/httpd.obj" \
"./third_party/uip-1.0/apps/dhcpc/dhcpc.obj" \
"./drivers/pinout.obj" \
"../enet_uip_ccs.cmd" \
$(GEN_CMDS__FLAG) \
-l"libc.a" \
-l"F:/ti/TivaWare_C_Series-2.1.1.71/examples/boards/ek-tm4c1294xl/enet_uip/ccs/../../../../../driverlib/ccs/Debug/driverlib.lib" \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include utils/subdir_vars.mk
-include third_party/uip-1.0/uip/subdir_vars.mk
-include third_party/uip-1.0/apps/httpd/subdir_vars.mk
-include third_party/uip-1.0/apps/dhcpc/subdir_vars.mk
-include drivers/subdir_vars.mk
-include subdir_rules.mk
-include utils/subdir_rules.mk
-include third_party/uip-1.0/uip/subdir_rules.mk
-include third_party/uip-1.0/apps/httpd/subdir_rules.mk
-include third_party/uip-1.0/apps/dhcpc/subdir_rules.mk
-include drivers/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
enet_uip.out \

EXE_OUTPUTS__QUOTED += \
"enet_uip.out" \

BIN_OUTPUTS += \
enet_uip.bin \

BIN_OUTPUTS__QUOTED += \
"enet_uip.bin" \


# All Target
all: enet_uip.out

# Tool invocations
enet_uip.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: ARM Linker'
	"F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me -O2 -g --gcc --define=ccs="ccs" --define=PART_TM4C1294NCPDT --define=TARGET_IS_TM4C129_RA0 --define=DEBUG_OUTPUT --define=UIP_OFFLOAD_ICMP_CHKSUM --display_error_number --diag_warning=225 --diag_wrap=off --gen_func_subsections=on --ual -z -m"enet_uip_ccs.map" --heap_size=0 --stack_size=512 -i"F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/lib" -i"F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/include" --reread_libs --warn_sections --display_error_number --diag_wrap=off --xml_link_info="enet_uip_linkInfo.xml" --rom_model -o "enet_uip.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '
	@$(MAKE) --no-print-directory post-build

enet_uip.bin: $(EXE_OUTPUTS)
	@echo 'Invoking: ARM Hex Utility'
	"F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/bin/armhex"  -o "enet_uip.bin" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXE_OUTPUTS__QUOTED)$(BIN_OUTPUTS__QUOTED)
	-$(RM) "enet_uip.pp" "startup_ccs.pp" "utils\uartstdio.pp" "utils\ustdlib.pp" "third_party\uip-1.0\uip\uip.pp" "third_party\uip-1.0\uip\uip_arp.pp" "third_party\uip-1.0\uip\uip_timer.pp" "third_party\uip-1.0\apps\httpd\httpd.pp" "third_party\uip-1.0\apps\dhcpc\dhcpc.pp" "drivers\pinout.pp" 
	-$(RM) "enet_uip.obj" "startup_ccs.obj" "utils\uartstdio.obj" "utils\ustdlib.obj" "third_party\uip-1.0\uip\uip.obj" "third_party\uip-1.0\uip\uip_arp.obj" "third_party\uip-1.0\uip\uip_timer.obj" "third_party\uip-1.0\apps\httpd\httpd.obj" "third_party\uip-1.0\apps\dhcpc\dhcpc.obj" "drivers\pinout.obj" 
	-@echo 'Finished clean'
	-@echo ' '

post-build:
	-"F:/ti/ccsv6/utils/tiobj2bin/tiobj2bin" "enet_uip.out" "enet_uip.bin" "F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/bin/armofd" "F:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/bin/armhex" "F:/ti/ccsv6/utils/tiobj2bin/mkhex4bin"
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets

