# matrix-hal-swig

A [SWIG](https://github.com/swig/swig) wrapper for [MATRIX HAL](https://matrix-io.github.io/matrix-documentation/matrix-hal/overview/).

This repository is meant for those who want to have MATRIX HAL functionality for a [SWIG supported language](http://www.swig.org/compat.html).

We currently use this wrapper to implement Python and Ruby support for HAL.

- [matrix-lite-py](https://github.com/matrix-io/matrix-lite-py)
- [matrix-lite-rb](https://github.com/matrix-io/matrix-lite-rb)

# Roadmap
The checklist below is the current progress for achieving a basic wrapper of HAL. In the future, if needed, more functions can be added.
- [x] Leds
- [x] Sensors
  - [x] IMU
  - [x] Humidity
  - [x] Pressure
  - [x] UV
- [x] GPIO
- [ ] Microphones

# Development Dependencies
Ensure you have a Raspberry Pi, attached with a MATRIX device, that's flashed with [Raspbian Stretch](https://www.raspberrypi.org/blog/raspbian-stretch/).

Install SWIG
```bash
sudo apt-get install swig
```

Compiling steps for your language will vary. 

[SWIG Documentation](http://www.swig.org/index.php)
