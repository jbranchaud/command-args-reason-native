let run = () => {
    let [cmd_name, ...args] = Array.to_list(Sys.argv);
    
    print_endline(Printf.sprintf("Command Name: %s", cmd_name));

    switch(args) {
    | [] =>
        print_endline("No arguments given");
    | args =>
        print_endline("Arguments:");
        let arg_printer = (arg) =>
            print_endline(Printf.sprintf("• %s", arg));
        List.iter(arg_printer, args);
    }
};

run();