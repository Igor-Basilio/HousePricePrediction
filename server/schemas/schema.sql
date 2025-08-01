
DROP DATABASE IF EXISTS house_prediction;
CREATE DATABASE house_prediction;

USE house_prediction;

CREATE OR REPLACE TABLE model_parameters 
(
    id INT UNSIGNED AUTO_INCREMENT NOT NULL PRIMARY KEY,
    B0 FLOAT NOT NULL,
    B1 FLOAT NOT NULL,
    R2 FLOAT NOT NULL,
    P_ER_AVG FLOAT NOT NULL,
    RSE  FLOAT NOT NULL,
    CORR FLOAT NOT NULL, 
    NUM_PREDICTORS INT NOT NULL,
    trained_at TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP
);

CREATE OR REPLACE TABLE request 
(
    id INT UNSIGNED AUTO_INCREMENT NOT NULL PRIMARY KEY,

     -- Area the user sends ( predictor ) m^2
    area_sent FLOAT NOT NULL,  

    -- The predicted price for the home
    predicted_price FLOAT NOT NULL, 

    parameters_used INT UNSIGNED NOT NULL,
    date TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,

    FOREIGN KEY (parameters_used) REFERENCES model_parameters (id)
);

