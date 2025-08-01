script_folder="/home/Igor/Projects/c++/distributed_house_price_prediction_service/client/build/build/Release/generators"
echo "echo Restoring environment" > "$script_folder/deactivate_conanrunenv-release-x86_64.sh"
for v in GRPC_DEFAULT_SSL_ROOTS_FILE_PATH OPENSSL_MODULES
do
    is_defined="true"
    value=$(printenv $v) || is_defined="" || true
    if [ -n "$value" ] || [ -n "$is_defined" ]
    then
        echo export "$v='$value'" >> "$script_folder/deactivate_conanrunenv-release-x86_64.sh"
    else
        echo unset $v >> "$script_folder/deactivate_conanrunenv-release-x86_64.sh"
    fi
done


export GRPC_DEFAULT_SSL_ROOTS_FILE_PATH="/home/Igor/.conan2/p/b/grpc4476e4ecef39b/p/res/grpc/roots.pem"
export OPENSSL_MODULES="/home/Igor/.conan2/p/b/opens77e4f8a23c001/p/lib/ossl-modules"