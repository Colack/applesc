# Standard

This is the standard library for the [Apples](https://github.com/colack/applesc) programming language.

## List of modules

- [std](#std)
- [io](#io)
- [math](#math)
- [time](#time)
- [json](#json)
- [http](#http)
- [os](#os)
- [path](#path)
- [net](#net)
- [crypto](#crypto)
- [encoding](#encoding)
- [regexp](#regexp)
- [strings](#strings)
- [testing](#testing)
- [errors](#errors)
- [reflect](#reflect)
- [sync](#sync)
- [runtime](#runtime)

You can import any of the modules above by using the `connect` keyword.

```
connect "std"
```

## std

std, or the standard libary, is the main module that contains all the other modules. It is not automatically imported, so you must import it manually.

The std module contains extremely useful functions that are used in almost every program:

- `printStr` - Prints a string to the console.
- `printInt` - Prints an integer to the console.
- `printDec` - Prints a decimal to the console.
- `printBool` - Prints a boolean to the console.
- `print` - Prints any value to the console.
- `newLine` - Prints a new line to the console.
- `getInputStr` - Gets a string from the user.
- `getInputInt` - Gets an integer from the user.
- `getInputDec` - Gets a decimal from the user.
- `getInputBool` - Gets a boolean from the user.
- `getInput` - Gets any value from the user.

Example usage:

```
// main.apple

connect "std"

super main() {
    std.printStr("Hello, world!")
}
```

## io

The io module contains functions for reading and writing files.

- `readFile` - Reads a file and returns its contents as a string.
- `writeFile` - Writes a string to a file.

## math

The math module contains functions for performing mathematical operations.

- `abs` - Returns the absolute value of a number.
- `ceil` - Returns the smallest integer greater than or equal to a number.
- `floor` - Returns the largest integer less than or equal to a number.
- `round` - Returns the nearest integer to a number.
- `sqrt` - Returns the square root of a number.
- `max` - Returns the largest number in a list.
- `min` - Returns the smallest number in a list.
- `pow` - Returns a number raised to the power of another number.
- `random` - Returns a random number between 0 and 1.

## time

The time module contains functions for working with time.

- `now` - Returns the current time.
- `sleep` - Sleeps for a specified amount of time.

## json

The json module contains functions for working with JSON.

- `parse` - Parses a JSON string and returns a map.
- `stringify` - Converts a map to a JSON string.

## http

The http module contains functions for making HTTP requests.

- `get` - Sends a GET request to a URL and returns the response.
- `post` - Sends a POST request to a URL and returns the response.

## os

The os module contains functions for working with the operating system.

- `exit` - Exits the program with a specified exit code.
- `getEnv` - Gets the value of an environment variable.
- `setEnv` - Sets the value of an environment variable.
- `getArgs` - Gets the command-line arguments.

## path

The path module contains functions for working with file paths.

- `join` - Joins two or more paths together.
- `split` - Splits a path into its components.
- `basename` - Returns the last component of a path.
- `dirname` - Returns all but the last component of a path.
- `extname` - Returns the extension of a path.

## net

The net module contains functions for working with the network.

- `lookup` - Looks up the IP address of a hostname.
- `listen` - Listens for incoming connections on a port.
- `dial` - Dials a connection to a hostname and port.
- `accept` - Accepts an incoming connection.
- `read` - Reads data from a connection.
- `write` - Writes data to a connection.
- `close` - Closes a connection.

## crypto

The crypto module contains functions for working with cryptography.

- `hash` - Hashes a string using a specified algorithm.

## encoding

The encoding module contains functions for encoding and decoding data.

- `base64Encode` - Encodes a string using base64.
- `base64Decode` - Decodes a string using base64.
- `hexEncode` - Encodes a string using hexadecimal.
- `hexDecode` - Decodes a string using hexadecimal.

## regexp

The regexp module contains functions for working with regular expressions.

- `match` - Checks if a string matches a regular expression.
- `find` - Finds the first match of a regular expression in a string.
- `findAll` - Finds all matches of a regular expression in a string.
- `replace` - Replaces all matches of a regular expression in a string.

## strings

The strings module contains functions for working with strings.

- `contains` - Checks if a string contains another string.
- `startsWith` - Checks if a string starts with another string.
- `endsWith` - Checks if a string ends with another string.
- `repeat` - Repeats a string a specified number of times.
- `split` - Splits a string into a list of strings.
- `join` - Joins a list of strings into a single string.

## testing

The testing module contains functions for testing code.

- `assert` - Asserts that a condition is true.
- `assertEqual` - Asserts that two values are equal.
- `assertNotEqual` - Asserts that two values are not equal.
- `assertNil` - Asserts that a value is nil.
- `assertNotNil` - Asserts that a value is not nil.
- `assertTrue` - Asserts that a value is true.
- `assertFalse` - Asserts that a value is false.
- `assertContains` - Asserts that a string contains another string.
- `assertNotContains` - Asserts that a string does not contain another string.
- `assertStartsWith` - Asserts that a string starts with another string.
- `assertNotStartsWith` - Asserts that a string does not start with another string.
- `assertEndsWith` - Asserts that a string ends with another string.
- `assertNotEndsWith` - Asserts that a string does not end with another string.
- `assertPanic` - Asserts that a function panics.
- `assertNotPanic` - Asserts that a function does not panic.

## errors

The errors module contains functions for working with errors.

- `new` - Creates a new error.
- `wrap` - Wraps an error with another error.
- `unwrap` - Unwraps an error.
- `is` - Checks if an error is of a certain type.
- `as` - Converts an error to a certain type.

## reflect

The reflect module contains functions for working with reflection.

- `typeOf` - Returns the type of a value.
- `kindOf` - Returns the kind of a value.
- `valueOf` - Returns the value of a value.
- `set` - Sets the value of a value.
- `call` - Calls a function with a list of arguments.

## sync

The sync module contains functions for working with synchronization.

- `mutex` - Creates a new mutex.
- `lock` - Locks a mutex.
- `unlock` - Unlocks a mutex.
- `rwmutex` - Creates a new read-write mutex.
- `rlock` - Locks a read-write mutex for reading.
- `wlock` - Locks a read-write mutex for writing.

## runtime

The runtime module contains functions for working with the runtime.

- `gc` - Runs the garbage collector.
- `mem` - Returns the amount of memory used by the program.
- `stack` - Returns the amount of stack memory used by the program.
- `heap` - Returns the amount of heap memory used by the program.
- `goroutines` - Returns the number of goroutines running in the program.
- `version` - Returns the version of the runtime.
- `os` - Returns the operating system the program is running on.
- `arch` - Returns the architecture the program is running on.
- `cpus` - Returns the number of CPUs the program is running on.
- `exit` - Exits the program with a specified exit code.

## License

This project is licensed under the MIT license. See the [LICENSE](LICENSE) file for more info.