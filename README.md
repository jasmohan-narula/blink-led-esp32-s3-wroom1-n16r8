# Example Project to start development for ESP32-S3-WROOM-1-N16R8 using PlatformIO
The board ESP32-S3-WROOM-1-N16R8 is not easily supported by Arduino and other platforms. It took me too long to figure out how to run a simple Blink sketch without any issues on PlatformIO. After browsing through various sites, I figured out how to configure it in PlatformIO with full functionality.

Special thanks to https://community.platformio.org/u/sivar2311/ , whose comments helped others facing the same issue, and helped me out a lot.

Since I could not find a sample project on GitHub, I decided to post one myself for others to get started with their work using this board on PlatformIO.

## Setup steps
1) Install VS Code and have the extension "PlatformIO IDE: (Id: platformio.platformio-ide) installed.
2) Clone this project into one directory. Open VS Code inside the root directory of this project or using the PlatformIO extention open it.
3) After PlatformIO gets loaded, it will ask you to install Espressif IDF/IDE. Install the latest/wanted version. Relauch VS Code.
4) Configure the Serial Port of the board in the files 'platformio.ini' and '.vscode/settings.json'.
5) Click the Upload and wait for code to get uploaded to ESP32-S3
6) Then start your main development!