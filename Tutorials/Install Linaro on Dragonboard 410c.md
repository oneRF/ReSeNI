We decided to install the Debian Linux supplied from [96boards](http://www.96boards.org/product/dragonboard410c/) on our Dragonboard 410c.
This Linux image is customized to this specific platform with all peripherals en driver working.
The fact that this Linux distribution is available to this platform increases considerably the development speed in the Dragonboard.

Needed resources to execute this tutorial:
- Computer with Linux
- MicroSP card with at least 4GB
- Dragonboard 410c with power supply

**Steps on the computer**

1 - Download the image

$ cd ~

$ mkdir Debian_SD_Card_Install_image

$ cd Debian_SD_Card_Install_image

$ wget http://builds.96boards.org/releases/dragonboard410c/linaro/debian/latest/dragonboard410c_sdcard_install_debian*.zip

2 - Unzip the files

$ cd ~/Debian_SD_Card_Install_image

$ unzip dragonboard410c_sdcard_install_debian-233.zip

3 - Insert the microSD on your computer and check if it mounted

$ df -h

  /dev/sdb1 7.4G 32K 7.4G 1% /media/3533-3737

4 - Unmount the microSD and burn the image

$ umount /dev/sdb1

$ sudo dd if=db410c_sd_install_debian.img of=/dev/sdb bs=4M oflag=sync status=noxfer

5 - Remove the microSD from you PC


**Steps on the Dragonboard**

1 - Turn off the board

2 - Let the switch S6 at the sequence 0-1-0-0 to boot from the microSD

3 - Insert the microSD

4 - Plug the keyboard and mouse in the USB port

5 - Connect a monitor in the HDMI port

6 - Turn on the board

7 - Select the option "install"

8 - The installation will run automatically. Wait until the end.

9 - Remove the microSD

10 - Let switch S6 at the sequence 0-0-0-0

11 - Click on "OK" to rebook