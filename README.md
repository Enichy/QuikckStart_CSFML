# QuickStart to CSFML, by Enichy
## Getting Started:
### Overview:


CSFML (C Simple and Fast Multimedia Library) is a library designed for simple and fast development of multimedia applications, particularly games and interactive media. This section will guide you through the process of setting up CSFML for your
development environment.

**Prerequisites:**

*Before you begin, understand this guide is made from Linux, specificially Ubuntu. Make sure you have the following prerequisites installed on your system:*

- **A C compiler (GCC, Clang, etc.)**
- **CSFML dependencies (like OpenGL, X11, etc.)**

### Installation:
- **Step 1: Install SFML**
  - First, you need to install SFML, as CSFML is a binding to SFML. Open a terminal and run the following commands:

```
sudo apt-get update
sudo apt-get install libsfml-dev
```
- **Step 2: Install CSFML**
  - Now that SFML is installed, you can proceed to install CSFML. Run the following command:
```
sudo apt-get install libcsfml-dev
```
- **Step 3: Verify Installation**
  - To verify that CSFML is installed correctly, let's create a simple C program that uses CSFML. Open your code editor and create a file named main.c with the following content:
```c
#include <SFML/Graphics.h>
#include <CSFML/Graphics.h>

int main()
{
    sfRenderWindow* window = sfRenderWindow_create(sfVideoMode_getDesktopMode(), "CSFML Example", sfDefaultStyle, NULL);

    while (sfRenderWindow_isOpen(window)) {
        sfEvent event;
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return 0;
}
```
  - Save the file and compile the program:
```
gcc example.c -o main -lcsfml-graphics -lcsfml-window -lcsfml-system
```
- If the compilation is successful, run the executable:
```
./main
```
You should see a window created by CSFML. If you see one, you've successfully installed CSFML on your Ubuntu system.

## Project Structure:
Guidance on organizing your CSFML project.
Explanation of the main components (source files, assets, etc.).

## Doxygen Documentation:
All the documentation for the code is here, so go on the link : [QuickStart CSFML by Enichy](https://enichy.github.io/QuikckStart_CSFML/index.html)

## Contributing Guidelines:
### Bug Reports and Feature Requests:

  - **Bug Reports:**
      - If you encounter any issues, please create a new issue with detailed information about the problem, including steps to reproduce it. Your input helps us identify and resolve issues efficiently.

  - **Feature Requests:**
      - For feature requests, submit a new issue outlining the proposed feature, its use case, and any other relevant details. We appreciate your ideas and feedback for enhancing the project.

### Documentation Contributions:

  - **Documentation Improvements:**
      - If you find areas in the documentation that can be improved or clarified, feel free to submit a documentation issue or directly propose changes.

  - **Documentation Issues:**
      - Report any documentation issues you come across, such as inaccuracies or missing information.

### General Guidelines:

  - **Communication:**
      - Engage with the community on our forum or Discord channel. Your questions, suggestions, and discussions contribute to the growth of our community.

  - **Feedback:**
      - Share your thoughts and suggestions. We value feedback from users to enhance the overall project experience.

  - **Spread the Word:**
      - If you enjoy using the project, consider sharing it with others. Your support helps build a stronger user base.

## Support and Community:

If you encounter any issues, have questions, or want to engage with the community, there are several resources available to you.

### Forums and Discussion Groups:

- [CSFML Official Forum](https://fr.sfml-dev.org/forums/index.php?board=31.0)
  - Visit the official forum to connect with other CSFML users. You can ask questions, share your experiences, and learn from the community.

- [Enichy's Discord Server](https://discord.gg/rR3VkEamSx)
  - Visit our discord server, to see where the documentation is going, to get help or just to talk.

### Reporting Issues:

If you believe you have found a bug or have a feature request, please consider reporting it on our [GitHub Issue Tracker](https://github.com/Enichy/QuikckStart_CSFML/issues).
Before reporting, make sure to check if a similar issue has already been raised. Provide detailed information about the problem, including steps to reproduce it.

## Versioning:
### Version: 2.5-1.1

This documentation is based on CSFML version 2.5-1.1. If you are using a different version, please refer to the [CSFML Official Documentation](https://www.sfml-dev.org/download/csfml/) for version-specific details.

### Adapting Documentation for Future Updates

If CSFML receives updates and you need to adapt this documentation for a different version, follow these steps:

1. **Check for Updates:**
   - Visit the [CSFML GitHub repository](https://github.com/SFML/CSFML) or the official CSFML website to check for the latest version.

2. **Review Release Notes:**
   - Read the release notes provided with the new CSFML version. Look for any changes, additions, or deprecations that might affect your code or documentation.

3. **Update Code Examples:**
   - If there are changes to CSFML APIs or functionalities, update code examples in this documentation accordingly.

4. **Verify Configuration:**
   - If there are changes in the configuration or build process, update any relevant sections in the documentation.

5. **Update Dependencies:**
   - If the new CSFML version requires updates to external dependencies, make the necessary adjustments in your documentation.

6. **Version Tagging:**
   - Consider using version tags in your repository to tag the documentation at specific CSFML versions. This helps users navigate the documentation for the version they are using.

7. **Community Support:**
   - If you encounter issues or have questions during the update process, check the CSFML community forums or GitHub discussions for assistance.

### Additional Resources

- [CSFML GitHub Repository](https://github.com/SFML/CSFML)
- [CSFML Official Documentation](https://www.sfml-dev.org/download/csfml/)
- [CSFML Community Forums](https://en.sfml-dev.org/forums/index.php)

## License:
### QuickStart CSFML

© [Enichy], [2024]. All rights reserved.

This work is licensed under the [Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License](http://creativecommons.org/licenses/by-nc-nd/4.0/).

**You are free to:**
- Share: Copy and redistribute the material in any medium or format for non-commercial purposes.

**Under the following terms:**
- Attribution: You must give appropriate credit, provide a link to the license, and indicate if changes were made. You may do so in any reasonable manner, but not in any way that suggests the licensor endorses you or your use.
- NonCommercial: You may not use the material for commercial purposes.
- NoDerivatives: If you remix, transform, or build upon the material, you may not distribute the modified material.

![CC BY-NC-ND](https://licensebuttons.net/l/by-nc-nd/4.0/88x31.png)


## Changelog:
- readme.md (WIP)
