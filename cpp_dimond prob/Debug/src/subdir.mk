################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/cpp_dimond\ prob.cpp 

OBJS += \
./src/cpp_dimond\ prob.o 

CPP_DEPS += \
./src/cpp_dimond\ prob.d 


# Each subdirectory must supply rules for building sources it contributes
src/cpp_dimond\ prob.o: ../src/cpp_dimond\ prob.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/cpp_dimond prob.d" -MT"src/cpp_dimond\ prob.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


