
# ************************************************
#
#  make cinstall -> [ make build | make run ]
#
#  I don't want to couple building and installing 
#  since compilling packages can sometimes take
#  a long time.
#
# ************************************************

.PHONY: build run cinstall

DATASET=
DELIMITER=
HEADER=

EX_NAME=dhp_client
RELEASE=build/build/Release
EXECUTABLE=${RELEASE}/generators/${EX_NAME}

clean: 
	rm -rf build/build

build: 
	cmake -S . -B ${RELEASE}/generators \
	-DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release 
	cmake --build ${RELEASE}/generators

run: build
	./${EXECUTABLE} ${DATASET} ${DELIMITER} ${HEADER}

cinstall: clean install

install: src/main.cpp
	conan install . --output-folder=build --build=missing

# export RELEASE_PATH=${RELEASE}
# export EXECUTABLE_PATH=${EXECUTABLE}
# export PS1=[${PWD##*/}] 
	
