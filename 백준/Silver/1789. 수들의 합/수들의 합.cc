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

int main(){
    FASTIO;
    ll s;cin>>s;
    ll t = 0;
    ll a = 1;
    ll ans = 0;
    while(t<=s){
        t+=a;
        a++;
    }
    cout<<max(1LL,a-2);
}