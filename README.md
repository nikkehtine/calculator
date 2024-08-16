# Calculator

## Build and run

1. Install [![Raylib logo](https://raw.githubusercontent.com/raysan5/raylib/master/logo/raylib_16x16.png)Raylib](https://raylib.com)

   [Installation instructions](https://github.com/raysan5/raylib#build-and-installation)

2. Run the build command

   ```sh
   make build
   ```

   By default it builds with Linux flags. If you're on macOS or Windows, specify the target as such:

   ```sh
   make build TARGET=macos
   ```

   Otherwise customize the **Makefile** to make it work with your setup

3. Run the executable

   ```sh
   ./calc
   ```

4. Clean up the directory

   ```sh
   make clean
   ```
