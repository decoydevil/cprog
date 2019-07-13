################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/assign3_4\ factorial\ .c 

OBJS += \
./src/assign3_4\ factorial\ .o 

C_DEPS += \
./src/assign3_4\ factorial\ .d 


# Each subdirectory must supply rules for building sources it contributes
src/assign3_4\ factorial\ .o: ../src/assign3_4\ factorial\ .c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/assign3_4 factorial .d" -MT"src/assign3_4\ factorial\ .d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


