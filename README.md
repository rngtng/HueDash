# HueDash
Control your Philips Hue via RAKWireless Dashbutton

This Arduino Sketch allows you to control your Philips Hue setup with a
Dashbutton by RAKWireless. It reacts to button presses which emits http
requests to the Hue REST API. The current state is displayed via the button leds.


## Installation

This sketch makes usage of git submodule to keep it's dependency local. For
that, initialise all with:

```
git submodule init
```

Later, keep submodules up to date with:

```
git submodule update
```

See: https://gist.github.com/gitaarik/8735255

### Libraries

Used libraries:

* https://github.com/lasselukkari/aWOT
* https://github.com/rngtng/Dash.ino
* https://github.com/andium/hueDino
* https://github.com/bblanchon/ArduinoJson

## Features / Ideas

* Firmware updates via OTA
* Select scene via Buttonpress
* Show which scene is selected
* Hue Onboarding
* Reset HUE User
* Wireless setup mode


## Ideas:
* auto-find bridge: https://github.com/sqmk/Phue/wiki/Finding-Philips-Hue-bridge-on-network
https://github.com/dannybackx/arduino-upnp
https://developers.meethue.com/content/upnp-scanning-philips-hue-bridge
* SPA with https://vuejs.org/
