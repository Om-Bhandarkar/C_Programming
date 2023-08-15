# C_Programming
![C-Programming-Language](https://user-images.githubusercontent.com/99426684/237000910-b993e16b-3ceb-4671-ba0e-b974ab930321.png)
<!DOCTYPE html>
<html>
<head>
    <title>Introduction to C Programming</title>
</head>
<body>
    <header>
        <h1>Introduction to C Programming</h1>
    </header>
    <main>
        <section>
            <h2>What is C Programming?</h2>
            <p>C is a general-purpose programming language that was developed in the early 1970s at Bell Labs. It is widely used for system programming, embedded programming, and developing various applications.</p>
        </section>
        
        <section>
            <h2>Basic Structure of a C Program</h2>
            <p>A C program consists of a collection of functions. The main function is the entry point of the program, where execution begins. Here's a simple example:</p>
            <pre><code>
#include &lt;stdio.h&gt;

int main() {
    printf("Hello, World!\n");
    return 0;
}
            </code></pre>
        </section>
        
        <section>
            <h2>Variables and Data Types</h2>
            <p>C supports various data types such as int, float, double, char, etc. Variables are used to store data of these types. Example:</p>
            <pre><code>
int age = 25;
float pi = 3.14159;
char initial = 'A';
            </code></pre>
        </section>
        
        <section>
            <h2>Control Structures</h2>
            <p>C provides control structures like if-else, while loop, for loop, and switch-case for decision-making and looping.</p>
            <pre><code>
if (condition) {
    // code to execute if condition is true
} else {
    // code to execute if condition is false
}

while (condition) {
    // code to repeat as long as condition is true
}

for (int i = 0; i < 5; i++) {
    // code to repeat 5 times
}

switch (expression) {
    case value1:
        // code if expression matches value1
        break;
    case value2:
        // code if expression matches value2
        break;
    // more cases...
    default:
        // code if no case matches
}
            </code></pre>
        </section>
    </main>
    <footer>
        <p>&copy; 2023 Your Name. All rights reserved.</p>
    </footer>
</body>
</html>
