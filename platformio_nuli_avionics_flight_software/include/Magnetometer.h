#ifndef PLATFORMIO_NULI_AVIONICS_FLIGHT_SOFTWARE_MAGNETOMETER_H
#define PLATFORMIO_NULI_AVIONICS_FLIGHT_SOFTWARE_MAGNETOMETER_H

#include <Avionics.h>
#include <GenericSensor.h>

/**
 * @class Magnetometer
 * @brief Generic Magnetometer
 * @details Base class for all Magnetometer. Can also be used as an "injected" class, where an external source provides the data (i.e. desktop sim)
 */
class Magnetometer : public GenericSensor {
public:
    /**
     * @brief Injects sensor data directly
     * @details If a sensor can't be directly read from, you can inject data directly to the class
     * @param magneticFieldGauss Magnetic field in gauss
     * @param temperatureK Temperature in kelvin
     */
    inline void inject(Vector3D_s magneticFieldGauss, double temperatureK) {
        m_magneticFieldGauss = magneticFieldGauss;
        m_temperatureK = temperatureK;
    }

    /**
     * @brief Gets the Magnetic field
     * @return Magnetic field in gauss
     */
    inline Vector3D_s getMagneticFieldGauss() const {
        return m_magneticFieldGauss;
    }

    /**
     * @brief Gets the temperature
     * @return Temperature in K
     */
    inline double getTemperatureK() const {
        return m_temperatureK;
    }

protected:
    Vector3D_s m_magneticFieldGauss = {};       ///< Sensor data vector
    double m_temperatureK = 0;                  ///< Sensor temperature
};

#endif //PLATFORMIO_NULI_AVIONICS_FLIGHT_SOFTWARE_MAGNETOMETER_H
