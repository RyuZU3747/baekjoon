use std::io;

fn main() {
    let mut n1 = String::new();
    io::stdin().read_line(&mut n1).unwrap();
    let n: u32 = n1.trim().parse().expect("num");
    let mut i: u32 = 0;
    while i < n {
        i = i + 1;
        let mut s = String::new();
        io::stdin().read_line(&mut s).expect("asdf");
        s = s.trim().to_string();
        if s == "Algorithm"{
            println!("204");
        }
        else if s == "DataAnalysis"{
            println!("207");
        }
        else if s == "ArtificialIntelligence"{
            println!("302");
        }
        else if s == "CyberSecurity"{
            println!("B101");
        }
        else if s == "Network"{
            println!("303");
        }
        else if s == "Startup"{
            println!("501");
        }
        else if s == "TestStrategy"{
            println!("105");
        }
    }
}