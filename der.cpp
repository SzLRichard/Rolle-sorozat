#include <iostream>
#include <string>


std::string der(int (&fd)[4]) {
	std::string str;
	for (int i = 0;i < 3;i++) {
		fd[i] = fd[i + 1] * (i + 1);	
	}
	for (int j = 2;j >= 1;j--) {
		if (fd[j] > 0)str = str + '+' +std::to_string(fd[j]) + "*x^"+ std::to_string(j);
		if (fd[j] < 0)str = str + ' ' + std::to_string(fd[j]) + "*x^" + std::to_string(j);
	}
	if (fd[0] > 0)str += '+' + std::to_string(fd[0]);
	if (fd[0] < 0)str += ' ' + std::to_string(fd[0]);

	return str;
}