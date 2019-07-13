################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/test4\ uc.c 

OBJS += \
./src/test4\ uc.o 

C_DEPS += \
./src/test4\ uc.d 


# Each subdirectory must supply rules for building sources it contributes
src/test4\ uc.o: ../src/test4\ uc.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/test4 uc.d" -MT"src/test4\ uc.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


