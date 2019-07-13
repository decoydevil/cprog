################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/assign8_1\ STRUCT-UNION.c 

OBJS += \
./src/assign8_1\ STRUCT-UNION.o 

C_DEPS += \
./src/assign8_1\ STRUCT-UNION.d 


# Each subdirectory must supply rules for building sources it contributes
src/assign8_1\ STRUCT-UNION.o: ../src/assign8_1\ STRUCT-UNION.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/assign8_1 STRUCT-UNION.d" -MT"src/assign8_1\ STRUCT-UNION.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


