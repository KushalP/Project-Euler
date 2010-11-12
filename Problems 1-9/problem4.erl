-module(problem4).
-import(lists).
-compile(export_all).

solution(N) ->
    Greatest = palindrome(N),
    io:format("The largest palindrome product of numbers under ~w is: ~w~n", [N, Greatest]).

palindrome(N) ->
    if 
        N >= 100 ->
            Candidate = buildpalindrome(N),
            Success = testpalindrome(Candidate, 999),
            if
                Success == true ->
                    Candidate;
                true ->
                    palindrome(N-1)
            end;
        true ->
            io:format("No match found~n")
    end.

buildpalindrome(N) ->
    Nstring = integer_to_list(N),
    ReverseN = lists:reverse(Nstring),
    Palindrome = Nstring ++ ReverseN,
    Npalindrome = list_to_integer(Palindrome),
    Npalindrome.

testpalindrome(N, Testfactor) ->
    if
        Testfactor >= 100 ->
            if
                N rem Testfactor == 0 ->
                    Cofactor = round(N / Testfactor),
                    if
                        Cofactor >= 100, Cofactor =< 999 ->
                            true;
                        true ->
                            false
                    end;
                true ->
                    testpalindrome(N, Testfactor - 1)
            end;
        true ->
            false
    end.
