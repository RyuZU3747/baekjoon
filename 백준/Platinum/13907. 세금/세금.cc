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
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

vector<pii> graph[1001];
int dist[1010][1010];

int main(){
    FASTIO;
    int n,m,k;cin>>n>>m>>k;
    int s,d;cin>>s>>d;
    for(int i=0;i<m;i++){
        int a,b,w;cin>>a>>b>>w;
        graph[a].push_back({w,b});
        graph[b].push_back({w,a});
    }
    priority_queue<pair<int, pii>> pq;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++) dist[i][j] = 1234567890;
    }
    dist[s][0] = 0;
    pq.push({0,{s,0}});
    while(!pq.empty()){
        auto [wei, x] = pq.top();
        auto [cur, cnt] = x;
        wei = -wei;
        pq.pop();
        if(dist[cur][cnt] < wei) continue;
        for(auto [nwei, nxt]: graph[cur]){
            if(dist[nxt][cnt+1] > wei + nwei){
                dist[nxt][cnt+1] = wei + nwei;
                pq.push({-dist[nxt][cnt+1], {nxt, cnt+1}});
            }
        }
    }
    int ans = 1234567890;
    for(int i=0;i<n;i++) ans = min(ans, dist[d][i]);
    cout<<ans<<'\n';
    int sum = 0;
    for(int i=0;i<k;i++){
        int p;cin>>p;
        sum += p;
        ans = 1234567890;
        for(int j=0;j<n;j++) ans = min(ans, dist[d][j] + j*sum);
        cout<<ans<<'\n';
    }
}