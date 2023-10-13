// Path: core/tokens.c
// Author: Jack Spencer

// Tokens file for the Apples programming language

#include "tokens.h"

/*
    Tokens for the Apples programming language:

    Variables Types:
        
        integer
        decimal
        string
        character
        boolean
        undefined
        ! (constant)

    Comments:

        // Single line comment
        /++ ++/ Multi line comment

    Keywords:

        super (function)
        this (object)
        new (object)
        delete (object)
        if (conditional)
        else (conditional)
        
    Operators:

        + (addition)
        - (subtraction)
        * (multiplication)
        / (division)
        % (modulus)
        ^ (exponent)
        = (assignment)
        == (equality)
        != (inequality)
        > (greater than)
        < (less than)
        >= (greater than or equal to)
        <= (less than or equal to)
        && (and)
        || (or)
        ! (not)
        ++ (increment)
        -- (decrement)
        += (addition assignment)
        -= (subtraction assignment)
        *= (multiplication assignment)
        /= (division assignment)
        %= (modulus assignment)
        ^= (exponent assignment)
        << (left shift)
        >> (right shift)
        <<= (left shift assignment)
        >>= (right shift assignment)
        & (bitwise and)
        | (bitwise or)
        ~ (bitwise not)
        &= (bitwise and assignment)
        |= (bitwise or assignment)
        ~= (bitwise not assignment)
        ? (ternary)
        : (ternary)
        . (dot)
        , (comma)
        ; (semicolon)
        : (colon)
        ( (left parenthesis)
        ) (right parenthesis)
        [ (left bracket)
        ] (right bracket)
        { (left brace)
        } (right brace)
        # (hash)
        $ (dollar sign)
        @ (at sign)
        ` (backtick)
        " (double quote)
        ' (single quote)
        \ (backslash)
        / (forward slash)
        _ (underscore)
        | (pipe)
        \n (newline)
        \t (tab)
        \r (carriage return)
        \b (backspace)
        \f (form feed)
        \v (vertical tab)
        \0 (null)
        \a (alert)
        \e (escape)
        \? (question mark)
        \x (hexadecimal)
        \u (unicode)
        \U (unicode)
        \N (unicode)
        \ (esc
    
    Others:

        connect (import)
        disconnect (import)
        output (export)

*/