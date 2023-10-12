# Applesc

This is the interpreter / compiler for the apples programming language.  
Apples is a programming language that is designed to be easy to learn and fun to use.

The language is both interpreted and compiled so that it can be used for both scripting and larger projects.

To run a file, use the command `applesc <file>`.
To compile a file, use the command `applesc -c <file>`.

## Syntax

Apples does things a little different than most languages. The syntax is designed to be easy to read and write, and to be easy to learn.

### Comments

Comments are started with `//` and end at the end of the line.

Example comment:
```
// This is a comment
```

Multiline comments are started with `/++` and end with `++/`.

Example multiline comment:
```
/++
    This is a multiline comment
++/
```

### Variables

Variables are declared with the type and name, and can be assigned a value.

There are 6 types of variables:

- `integer` - A whole number
- `decimal` - A number with a decimal point
- `string` - A string of characters
- `character` - A single character
- `boolean` - A true or false value
- `undefined` - A variable that has not been assigned a value

Example variable declaration:
```
    integer myInt = 5;
    decimal myDecimal = 5.5;
    string myString = "Hello, world!";
    character myChar = 'a';
    boolean myBoolean = true;
    undefined myUndefined;
```

Constants are declared the same way as variables, but with the `!` symbol before the type.

Example constant declaration:
```
    !integer myInt = 5;
```

### Functions

Functions are declared with the `super` keyword (Because they are super useful!), followed by the name, the parameters, and the body.

Example function declaration:
```
    super myFunction(integer myInt, string myString) {
        // Do something
    }
```

Functions can be called by using the name and passing in the parameters.

Example function call:
```
    myFunction(5, "Hello, world!");
```

### If statements

If statements are declared with the `if` keyword, followed by the condition, and the body.

Example if statement:
```
    if (myInt == 5) {
        // Do something
    }
```

### Else statements

Else statements are declared with the `else` keyword, followed by the body.

Example else statement:
```
    else {
        // Do something
    }
```

### Else if statements

Else if statements are declared with the `else if` keywords, followed by the condition, and the body.

Example else if statement:
```
    else if (myInt == 5) {
        // Do something
    }
```

### While loops

While loops are a bit different than most languages. There are three types of while loops:

- `whileTrue` - A while loop that runs forever as long as the condition is true
- `whileFalse` - A while loop that runs forever as long as the condition is false
- `whileUndefined` - A while loop that runs forever as long as the condition is undefined

While loops are declared with the `while` keyword, followed by the type, the condition, and the body.

Example while loop:
```
    whileTrue (myInt == 5) {
        // Do something
    }
```

### For loops

For loops are declared with the `for` keyword, followed by the variable declaration, the condition, the increment, and the body.

Example for loop:
```
    for (integer i = 0; i < 5; i++) {
        // Do something
    }
```

### Switch statements

Switch statements are declared with the `switch` keyword, followed by the variable, and the cases.

Example switch statement:
```
    switch (myInt) {
        case 0:
            // Do something
        case 1:
            // Do something
        default:
            // Do something
    }
```

### Classes

Classes are declared with the `class` keyword, followed by the name, the parent class, and the body. 

Classes cannot be stored in .apples files, and must be stored in .aclass files.

Example class declaration:
```
    class MyClass extends MyParentClass {
        // Do something
    }
```

### Class variables

Class variables are declared with the `class` keyword, followed by the type, the name, and the value.

Example class variable declaration:
```
    class integer myInt = 5;
```

### Class functions

Class functions are declared with the `super` keyword, followed by the name, the parameters, and the body.

Example class function declaration:
```
    super myFunction(integer myInt, string myString) {
        // Do something
    }
```

### Static variables

Static variables are declared with the `static` keyword, followed by the type, the name, and the value.

Example static variable declaration:
```
    static integer myInt = 5;
```

### Static functions

Static functions are declared with the `super` keyword, followed by the name, the parameters, and the body.

### Return statements

Return statements are declared with the `return` keyword, followed by the value.

Example return statement:
```
    return 5;
```

### Import statements

Import statements are declared with the `connect` keyword, followed by the file name.

Example import statement:
```
    connect "myFile.apples";
```

### Export statements

Export statements are declared with the `link` keyword, followed by the variable name.

Example export statement:
```
    link myVariable;
```

## Examples

You can find examples in the `./examples` folder.

## Contributing

If you would like to contribute to the project, please read the [contributing guidelines](./CONTRIBUTING.md).

## License

This project is licensed under the [MIT License](./LICENSE).