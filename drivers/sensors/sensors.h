#ifndef SENSORS_SENSOR_H
#define SENSORS_SENSOR_H

// IMU //
struct imu_values {
    // Accelerometer Output
    float accel_x;
    float accel_y;
    float accel_z;
    // Gyroscope Output
    float gyro_x;
    float gyro_y;
    float gyro_z;
    // Yaw, Pitch, Roll Output
    float yaw;
    float pitch;
    float roll;
    // Magnetometer Output
    float mag_x;
    float mag_y;
    float mag_z;
};

class imu {
    public:
    imu();
    ~imu();

    imu_values read();
};

// UV //
struct uv_values {
    float uv;
};

class uv {
    public:
    uv();
    ~uv();

    uv_values read();
};

// Humidity //
struct humidity_values {
    float humidity;
    float temperature;
};

class humidity {
    public:
    humidity();
    ~humidity();

    humidity_values read();
};

// Pressure //
struct pressure_values {
    float altitude;
    float pressure;
    float temperature;
};

class pressure {
    public:
    pressure();
    ~pressure();

    pressure_values read();
};

#endif