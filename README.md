# Teensy-Pin-BruteForcer

a BruterForcer for Teensy, works with 4 and 5 digit pins, tested on Android 4.4.2. and Teensy 2.0, but it works on any kind of Teensy, it does not work on new versions of android with temporal blocks that increase according to the attempts.

</BR>

![Alt text](https://raw.githubusercontent.com/JonnyBanana/Teensy-Android-Pin-BruteForcer/master/img/pinout.png)

</BR>

Although now the Android versions tested are obsolete, in my daily experience as a technician I often fall into old models which require me to bypass the pin.
Needless to say, the manual operation is boring at best, and not feasible in most ...
Although I have to say that I manually solved about one in five cases, simply using the list of the most used pin or screen lock that you can find here:

</BR>

https://github.com/JonnyBanana/The-Most-Common-Passwords-Pin-e-ScreenLocks


</BR>

However, I decided to make this simple code to automate a very boring process ...

</BR>

<h3>Requirements</h3>

-Teensy Board</BR>
-Otg Adapter</BR>
-Micro usb Cable</BR>

</BR>
<h3>Compatibility</h3>

-Android 4.4.2 or lower (maybe even on some android 5.0 models)</BR>
-Teensy 2.0 or higher</BR>

</BR>

<h3>How it works???</h3>

To realize these scripts I took inspiration from the following articles and codes:

https://jumpespjump.blogspot.com/2013/06/online-brute-forcing-android-pin-lock.html

https://github.com/pissedoffadmins/site_scripts/blob/master/4pin_brute.ino

</BR>

These examples from which I started but try to try all the possible combinations from 0 to 9999 (in the case of the 4 digit pin),
I wanted to optimize the code a little, so as to optimize in most cases the timing of the attack.

</BR>

<h4>4 Digit PIN Attack</h4>

The code then performs the following attempts:
- try the twenty most used combinations
- try all dates from 1900 to 2019
- if two others have not been successful, try a brute force attack

</BR>

<h4>5 Digit PIN Attack</h4>

The code then performs the following attempts:
- try the twentyfive most used combinations
- if two others have not been successful, try a brute force attack

</BR>

![Alt text](https://raw.githubusercontent.com/JonnyBanana/Teensy-Android-Pin-BruteForcer/master/img/brute-gif.gif)

