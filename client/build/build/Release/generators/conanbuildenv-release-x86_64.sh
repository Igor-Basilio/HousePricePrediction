script_folder="/home/Igor/Projects/c++/distributed_house_price_prediction_service/client/build/build/Release/generators"
echo "echo Restoring environment" > "$script_folder/deactivate_conanbuildenv-release-x86_64.sh"
for v in 
do
    is_defined="true"
    value=$(printenv $v) || is_defined="" || true
    if [ -n "$value" ] || [ -n "$is_defined" ]
    then
        echo export "$v='$value'" >> "$script_folder/deactivate_conanbuildenv-release-x86_64.sh"
    else
        echo unset $v >> "$script_folder/deactivate_conanbuildenv-release-x86_64.sh"
    fi
done

