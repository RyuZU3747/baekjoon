/*
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣤⣤⣶⣶⣶⣶⣶⣶⣿⣿⣶⣶⣶⣶⣶⣤⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣴⣶⡿⠿⠿⠛⠋⠉⠉⠀⠀⠀⠀⠀⠀⠀⠉⠉⠙⠛⠿⠿⣷⣦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⡿⠟⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠻⢦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⡶⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣾⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⢦⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣶⣶⡿⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⡿⠁⠀⠀⠀⠀⠀⠀⢀⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠻⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣾⡿⠿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣴⣿⡿⠁⠀⠀⠀⠀⠀⠀⢠⣾⢋⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣾⣿⠟⠋⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣶⡿⠋⣹⣿⠁⠀⠀⠀⠀⠀⠀⢀⣿⠃⢸⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⣠⣴⣿⠿⠋⢁⣠⣴⠟⠁⠀⠀⢀⣴⠏⠀⢀⣴⣿⠟⠉⠀⠀⣿⡏⠀⠀⠀⠀⠀⠀⢀⣾⡏⠀⠈⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢻⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⢀⣾⣿⠟⠁⠀⣰⣿⡟⠁⠀⠀⠀⢠⣾⠏⢀⣴⡿⠛⠁⠀⠀⠀⠀⣿⡇⠀⠀⠀⢠⡆⠀⣾⣿⠁⠀⠀⠘⣿⣷⡀⠀⠀⠀⠀⠀⠀⣾⠀⠀⠀⠀⠀⣸⣿⣶⣄⠀⠀⠀⢿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⣴⣿⡿⠁⣠⣶⣾⣿⠏⠀⠀⠀⠀⢠⣿⣃⣤⣿⣿⣷⣶⣶⣄⠀⠀⠀⢻⣿⡄⠀⠀⣿⡇⢰⡿⠁⠀⠀⠀⠀⠘⢿⣿⣦⡀⠀⠀⠀⠀⢻⣆⠀⠀⠀⠀⣿⡟⠉⢿⣷⡄⠀⠘⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⢀⣼⣿⠏⣠⣾⣿⣿⡿⠁⠀⠀⠀⠀⣠⣾⣿⡿⠛⠉⣁⣀⣉⣉⣛⣷⠀⠀⠘⣿⣷⡀⠀⢿⣿⣸⠇⠀⠀⠀⠀⠀⠐⠦⣭⣿⣿⣷⣤⣀⡀⠈⣿⣦⠀⠀⠀⣿⡇⠀⠀⢻⣷⡀⠀⣿⣇⣠⣤⣄⠀⠀⠀⠀⠀⠀⠀
⠀⣼⣿⠋⣼⣿⠏⣸⣿⡇⠀⠀⠀⢀⣼⣿⠏⠁⢀⣴⡿⠟⠉⠙⠛⠻⢿⣶⡀⠀⠈⢿⣿⣄⠘⣿⣏⠀⠀⠀⣀⣤⣶⣦⣤⣄⡉⠛⠿⣿⣿⣿⣦⣼⣿⣷⡄⠀⣿⡇⠀⠀⠈⣿⣇⠀⣼⣿⠿⢻⣿⡇⠀⠀⠀⠀⠀⠀
⢰⣿⣿⣼⣿⠋⠀⣿⣿⠀⠀⠀⠀⣾⡿⠁⢀⣴⣿⠟⠁⠀⠀⠀⠀⠀⠘⣿⣧⠀⠀⠀⠙⠻⢷⣿⣿⣦⢀⣾⡿⠛⠁⠀⠈⠛⠿⣷⣦⡀⠉⠻⢿⣿⣟⣻⣿⣦⣿⣷⠀⠀⢰⣿⣿⣿⠟⠁⠀⣼⣿⠃⠀⠀⠀⠀⠀⠀
⠸⣿⣿⣿⡏⠀⠀⣿⣿⠀⠀⠀⢰⣿⠁⠀⢸⣿⠃⠀⠀⠀⠀⠀⠀⠀⢰⣿⡟⠀⠀⠀⠀⠀⠀⠈⠉⠙⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠙⣿⣦⠀⠀⠙⢿⣿⣿⣿⢿⣿⣆⣠⣾⣿⣿⣿⡀⢀⣼⣿⡏⠀⠀⠀⠀⠀⠀⠀
⠀⠹⣿⣿⣇⠀⠀⢻⣿⡆⠀⠀⣼⡿⠆⠀⣿⣿⠀⠀⠀⠀⠀⢀⣠⣶⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣷⠀⠀⠀⠙⢿⣿⣮⡿⣿⣿⣿⠁⢸⣿⣿⣿⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠙⠿⣿⣄⠀⠈⠻⣿⣄⣼⡿⠀⠀⠀⠘⢿⣷⣶⣴⣶⣶⡿⠿⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣷⣀⠀⠀⠀⠀⠀⠀⠀⠀⣽⣿⠇⠀⠀⠀⢸⣿⢿⣷⣼⣿⠇⠀⠀⠹⣯⡉⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠈⠉⠁⠀⠀⢈⣿⣿⠃⠀⠀⠀⠀⠀⠈⠉⠉⠁⠀⠀⠀⣀⣀⣀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⢿⣿⣶⣶⣤⣤⣴⣶⣾⡿⠏⠀⠀⠀⠀⢸⣿⠀⢹⣿⡏⠀⠀⠀⠀⠸⣿⣆⠀⠀⣿⡆⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⣿⠃⠀⠀⠀⠀⠀⢀⣠⣤⣤⠶⠖⠚⠛⠋⠉⠛⠛⠛⠛⠻⢿⣷⣦⣤⣀⠀⠀⠀⠀⠀⠈⠉⠛⠛⠛⠛⠋⠉⠀⠀⠀⠀⠀⢀⣿⡟⠀⢸⣿⣦⣄⠀⠀⠀⠀⢻⣿⡀⠀⢻⣿⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⠀⠀⠀⠀⢀⣴⣿⡿⠋⠁⠀⠐⠀⠀⠀⣤⡀⠀⠻⠀⠀⠀⠈⠉⠻⢿⣷⣦⡀⠀⠀⠀⠀⠀⠀⠈⠛⠶⢦⣤⡤⠄⠀⢀⣾⡿⠁⠀⠘⠋⠻⣿⣖⢶⣆⠀⢸⣿⠇⠀⠈⣿⣧⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢀⣴⠜⢿⣷⣄⠀⣴⣿⡟⠉⠀⠀⠀⠀⠀⠀⠀⠈⠿⠅⠀⠀⠀⠀⠀⠀⠀⠀⣀⣉⣻⣿⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣴⣿⠟⠁⠀⠀⠀⠀⠀⠙⠛⠉⠉⠀⣾⠟⠀⠀⠀⠈⣿⣷⣄⠀⠀
⠀⠀⠀⠀⠀⠀⣰⣿⠏⠀⠀⠉⠉⣻⣿⣿⣈⣀⣀⣀⣀⣀⣠⣤⣤⣤⣤⣤⣴⣦⣶⣶⣶⣶⡾⠿⢿⣿⠛⠻⢿⣿⣆⠀⠠⣤⣀⣤⣤⣤⣶⣿⠿⠛⢁⣀⣠⣤⠴⠒⠀⠊⠉⠙⠦⣄⠀⠀⠀⠀⠀⡀⠀⠈⠿⣿⣆⠀
⠀⠀⠀⠀⢀⣾⡿⠁⠀⠀⢠⣶⣿⣿⡿⠟⣿⡿⠛⠛⣿⣿⣿⡉⠉⠁⢰⣦⡄⠀⠀⠀⠈⣯⣤⣴⠾⢿⣿⣶⣴⣿⣿⡄⠀⠈⠛⠻⣿⣿⣿⣿⣿⣿⠿⠿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠘⢦⡀⠀⠀⠀⣿⡄⠀⠀⠹⣿⡄
⠀⠀⠀⢠⣿⡿⠁⠀⠀⢠⣿⣿⣿⠋⠀⠀⢸⣿⣄⢰⣿⡇⠙⠿⢷⣦⣼⣿⣿⣦⣴⡾⣿⡟⠋⠁⠀⠀⠉⠉⢻⡆⢹⡷⠒⢿⣿⡿⠿⠓⣶⣤⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢷⡄⠀⠀⠹⣿⡄⠀⠀⢹⣿
⠀⠀⢠⣿⡟⠁⠀⠀⣰⡏⣿⡿⣁⣀⣴⣾⣦⠙⢿⣿⣿⣷⠀⢴⣶⡄⠙⢿⣿⣿⢿⣿⣿⠟⠀⠀⠀⠀⠀⠀⣼⠀⠀⣇⣴⡿⠋⠀⢀⣴⣿⠟⢻⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢳⠀⠀⠀⢻⣿⣦⡀⠈⣿
⠀⢠⣿⡟⠁⠀⣠⣾⣿⠀⠛⠟⣿⡿⠋⠈⠉⠀⠀⠈⠉⠀⠀⠀⠉⠀⠀⢀⣼⡿⠀⠀⠀⢀⣄⠀⠀⠀⠀⠀⢾⠇⠀⣿⡋⠀⠀⣴⣿⡟⠁⠀⠀⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠆⠀⠀⠘⣿⣿⣷⡀⢸
⠀⣾⣿⠀⢀⣾⣿⣿⠇⠀⠀⠀⣿⣧⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠿⠿⠷⠾⠿⣿⣿⣟⣠⣴⣶⣶⣦⣴⠄⢘⣿⣷⣖⣼⣿⠏⠀⠀⠀⠀⠹⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⡏⣿⡇⠈
⢸⣿⡏⣰⣿⡏⢸⡿⠀⠀⢀⣿⠏⠛⠻⠿⢿⣷⣶⣤⣤⣤⣤⠀⠀⠀⠀⠀⣀⣤⠶⠶⠾⠿⣿⣿⣿⡿⠟⠿⢷⣤⣿⠋⠻⣿⣿⠇⠀⠀⠀⠀⠀⠀⢻⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⠇⢸⡇⠀
⣿⣿⢡⣿⠟⠀⣿⡇⠀⠀⠸⣿⣤⣤⣤⣶⠾⠛⠉⠉⠉⠁⣾⣦⣤⣤⡶⠟⠛⠁⠀⠀⣠⣿⣿⠟⠁⠀⠀⠀⠀⠙⢿⠀⠀⠈⡁⠀⠀⠀⠀⠀⠀⠀⠈⢿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⡿⠀⠸⠇⠀
⣿⣿⣾⡟⠀⠀⢿⣧⠀⠀⠀⢠⣶⠾⣿⣿⣦⣄⠀⠀⠀⠀⠘⠛⠉⠁⠀⢀⣠⣤⣶⣾⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠘⣧⠀⠀⣿⡄⠀⠀⠀⠀⠀⠀⠀⠘⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⠟⠀⠀⠀⠀⠀
⢹⣿⣿⡇⠀⠀⠘⢿⣦⡀⠀⣾⣿⠀⠈⠉⠛⠿⣿⣶⣶⣶⣶⣶⣶⣶⣶⠿⠋⠀⠀⠁⣿⣏⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣇⠀⢿⣷⠀⠀⠀⣀⣠⣤⣴⣦⢼⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣿⠟⠁⠀⠀⠀⠀⠀⠀
⠀⢻⣿⣷⣄⠀⠀⠈⠙⠳⠀⠹⣿⣦⣀⡀⠀⠀⠀⠈⠉⠉⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⢻⣿⣤⡀⠀⠀⠀⠀⠀⢀⡼⠟⠻⢷⣿⣿⣿⣿⠿⠿⠛⠋⣹⣧⠀⠻⣿⡇⠀⠀⠀⣀⣀⣴⣾⠿⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠉⠛⠿⠷⠶⠀⠀⠀⠀⠀⠉⠛⠻⠿⠟⠛⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠿⣿⣿⣶⣶⣤⠶⠏⠀⠀⠀⠀⠿⠁⠀⠀⠀⠀⠀⢀⣿⣿⠀⠀⠈⠑⠶⠛⠛⠋⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
*/
#include <bits/stdc++.h>
#define ll long long int
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

vector<pii> graph[10010];
int ans;
void dfs(int cur, int par, int len){
    ans = max(ans, len);
    for(auto [nxt,cos] : graph[cur]){
        if(nxt==par) continue;
        dfs(nxt,cur,cos+len);
    }
}


int main(){
    FASTIO;
    while(1){
        int a,b,c;cin>>a>>b>>c;
        if(cin.eof()) break;
        graph[a].push_back({b,c});
        graph[b].push_back({a,c});
    }
    for(int i=1;i<10010;i++){
        if(graph[i].size()>0){
            dfs(i,0,0);
        }
    }
    cout<<ans;
}