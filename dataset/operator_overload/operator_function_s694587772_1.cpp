bool operator<(S a,S b){
	double aa=(a.F*a.S*a.M-a.P)/((a.A+a.B+a.C+a.D+a.E)+(a.D+a.E)*(a.M-1));
	double bb=(b.F*b.S*b.M-b.P)/((b.A+b.B+b.C+b.D+b.E)+(b.D+b.E)*(b.M-1));
	return aa>bb||(aa==bb&&a.L<b.L);
}