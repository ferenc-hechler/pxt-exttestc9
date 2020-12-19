# ExtTestC

## Test Releases

Install Extension
 
* https://github.com/ferenc-hechler/pxt-exttestc

and use javasript sources from INFO/test-full.ts in following editors

* CALLIOPE - https://makecode.calliope.cc/#editor
* MICROBIT - https://makecode.microbit.org/#editor
* CALLIOPE/beta - https://makecode.calliope.cc/beta#editor
* MICROBIT/beta - https://makecode.microbit.org/beta#editor

program tested

* HW - HelloWorld
* FULL - test-full.ts

### v0.2.4
 
+ CALLIOPE
+ MICROBIT

### v0.2.5
 
+ CALLIOPE

### v0.2.6

### v0.2.7

added platform/Utils.cpp

+ CALLIOPE
- MICROBIT HW 

### v0.2.8

integrated Utils.h/Utils.cpp into exttestc.cpp

- MICROBIT HW

### v0.2.9

strip down Utils to log()

+ MICROBIT FULL

### v0.3.0

add includes from Utils.cpp

+ MICROBIT FULL

### v0.3.1

add all sources from Utils.cpp


### v0.3.2

include etutils.h / etutils.cpp

- MICROBIT HW
- CALLIOPE HW

Bug in exttestc.cpp!

### v0.3.3

removed duplicate code in exttestc.cpp

+ CALLIOPE FULL
- MICROBIT HW

### v0.3.4

reduced etutils.h/.cpp, renamed log() to etlog()

+ CALLIOPE FULL
+ MICROBIT FULL

### v0.3.5:

renamed etlog() back to log()

- CALLIOPE HW
- MICROBIT HW

Bug in exttestc.cpp (renamed method etlog() was still called)

### v0.3.6:

fixed wrong calls of etlog() in exttestc.cpp.


### v0.3.7: 

commented in logInt and logFloat.

- CALLIOPE HW
- MICROBIT HW

error in etutils.cpp, missing include <stdarg>

### v3.8.1

fixed missing include <stdarg> in etutils.cpp

- CALLIOPE HW
- MICROBIT HW

wrong call to float2char

### v3.8.2

fixed wrong call to float2char

+ CALLIOPE FULL
- MICROBIT HW

### v3.9.0

renamed methods log() / logInt() to et_log() and et_log_int()


## ~ hint

To use this package, go to https://makecode.microbit.org, click ``Add package`` and search for **gator-light**. The package is located [here](https://makecode.microbit.org/pkg/sparkfun/pxt-gator-light)

## ~

## Basic usage

```blocks
//Sets the value of the light variable to the value read from the gator:light
let light = 0
light = gatorlight.light(AnalogPin.P0, gatorlightType.Lux)
```

Use ``||Get light on pin||`` to read the light value from a gator:light sensor attached to a given pin in lux or the straight ADC value.

## Example: Light Detector

```blocks
//Read light value and write it to the micro:bit screen as a bar graph.
let light = 0
basic.forever(function () {
    light = gatorlight.light(AnalogPin.P0, gatorlightType.Lux)
    led.plotBarGraph(
        light,
        1023
    )
})
```

## Supported targets

* for PXT/microbit

## License

MIT

```package
gatorlight=github:sparkfun/pxt-gator-light