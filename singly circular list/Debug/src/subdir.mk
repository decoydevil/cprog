################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/singly\ circular\ list.cpp 

OBJS += \
./src/singly\ circular\ list.o 

CPP_DEPS += \
./src/singly\ circular\ list.d 


# Each subdirectory must supply rules for building sources it contributes
src/singly\ circular\ list.o: ../src/singly\ circular\ list.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/singly circular list.d" -MT"src/singly\ circular\ list.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


