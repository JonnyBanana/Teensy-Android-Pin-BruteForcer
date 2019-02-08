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

<h3>Some Math...</h3>

So how long does this attack take?

</BR>

![Alt text](https://raw.githubusercontent.com/JonnyBanana/Teensy-Android-Pin-BruteForcer/master/img/brute-gif.gif)

</BR>

In the above gif it takes two seconds, but of course I have specially inserted one of the 20 most 
used pins for demonstration purposes, in reality things are a bit different ...

A few lengths in comparison:

    -4 digits, 10000tries, 18.4 hours
    -5 digits, 100000tries, 7.7 days
    -6 digits, 1000000tries, 77.3 days
  

It can be inferred why I did not even create the script for the 6 digit pins ...

If you are having trouble charging the battery, you can use a triple otg cable with charging adapter like this:

</BR>

![Alt text](https://raw.githubusercontent.com/JonnyBanana/Teensy-Android-Pin-BruteForcer/master/img/s-l1600.jpg)

</BR>

<a href="https://rover.ebay.com/rover/1/724-53478-19255-0/1?icep_id=114&ipn=icep&toolid=20004&campid=5338010827&mpre=https%3A%2F%2Fwww.ebay.it%2Fsch%2Fi.html%3F_from%3DR40%26_sacat%3D0%26_nkw%3Dotg%2520charge%26rt%3Dnc%26LH_PrefLoc%3D2%26_trksid%3Dp2045573.m1684">Cheap Otg Adapter</a>

</BR>

The script was written for Teensy 2, but adapt it to other Teensy and very easy and just change a single line of code, I left the comments in the code:

</BR>

![Alt text](https://raw.githubusercontent.com/JonnyBanana/Teensy-Android-Pin-BruteForcer/master/img/teensy-model.JPG)

</BR>

