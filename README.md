# QuickStart to CSFML, by Enichy
## Getting Started:
### Overview:


CSFML (C Simple and Fast Multimedia Library) is a library designed for simple and fast development of multimedia applications, particularly games and interactive media. This section will guide you through the process of setting up CSFML for your
development environment.

**Prerequisites:**

*Before you begin, understand this guide is made from Linux, specificially Ubuntu. Make sure you have the following prerequisites installed on your system:*

- **CMake (version 2.8.12 or higher)**
- **A C compiler (GCC, Clang, etc.)**
- **CSFML dependencies (like OpenGL, X11, etc.)**

### Installation:

**Download CSFML:**
- Visit the [Official CSFML website](https://www.sfml-dev.org/documentation/2.5.1/index.php) or download the source code from the [CSFML GitHub repository](https://github.com/SFML/CSFML).

**Build CSFML:**
  - Extract the downloaded archive and navigate to the CSFML directory.
  - Create a build directory (e.g., build/) within the CSFML directory.
  - Open a terminal and navigate to the build directory.
  - Run the following commands:
```
cmake ..
make
```
**Install CSFML:**
  - After successful compilation, install CSFML using the following command:
```
sudo make install
```
**Verify Installation:**
  - To ensure that CSFML is installed correctly, create a [simple C program](https://enichy.github.io/QuikckStart_CSFML/first__window_8c.html) that uses CSFML functions.
  Compile and run the program. If there are no errors, CSFML is installed successfully.

### Updating CSFML:

  If you have an older version of CSFML and want to update it, follow these steps:

- **Update CSFML Source Code:**
  - Download the latest CSFML source code from the official website or GitHub repository.

- **Build and Install:**
  - Repeat the steps mentioned in the "Build CSFML" and "Install CSFML" sections.

- **Verify Update:**
  - Check the CSFML version in your application to ensure that the update was successful.

Now you are ready to start using CSFML for your multimedia development projects. Move on to the next sections for tutorials and examples on how to create applications using CSFML.

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
