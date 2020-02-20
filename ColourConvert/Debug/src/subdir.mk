################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
LD_SRCS += \
../src/lscript.ld 

CPP_SRCS += \
../src/xf_cvt_color_accel.cpp \
../src/xf_cvt_color_tb.cpp 

OBJS += \
./src/xf_cvt_color_accel.o \
./src/xf_cvt_color_tb.o 

CPP_DEPS += \
./src/xf_cvt_color_accel.d \
./src/xf_cvt_color_tb.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: ARM v8 g++ compiler'
	aarch64-none-elf-g++ -Wall -O0 -g3 -I"C:\Users\teymo\Documents\GitHub\Vitis_Libraries\vision\L1\include" -I"C:\Users\teymo\Downloads\opencv\sources\include" -I"C:\Users\teymo\Downloads\opencv\build\include\opencv2" -I"C:\Users\teymo\Downloads\opencv\build\include" -c -fmessage-length=0 -MT"$@" -hls-target 1 -IC:/Users/teymo/workspace/zcu102/export/zcu102/sw/zcu102/standalone_domain/bspinclude/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


