################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/test\ strlen.c 

OBJS += \
./src/test\ strlen.o 

C_DEPS += \
./src/test\ strlen.d 


# Each subdirectory must supply rules for building sources it contributes
src/test\ strlen.o: ../src/test\ strlen.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/test strlen.d" -MT"src/test\ strlen.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


