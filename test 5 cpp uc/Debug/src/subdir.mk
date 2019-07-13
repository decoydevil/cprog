################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/test\ 5\ cpp\ uc.cpp 

OBJS += \
./src/test\ 5\ cpp\ uc.o 

CPP_DEPS += \
./src/test\ 5\ cpp\ uc.d 


# Each subdirectory must supply rules for building sources it contributes
src/test\ 5\ cpp\ uc.o: ../src/test\ 5\ cpp\ uc.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/test 5 cpp uc.d" -MT"src/test\ 5\ cpp\ uc.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


