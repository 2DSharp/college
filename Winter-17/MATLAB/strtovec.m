function v=strtovec(s,L)
  for i = 1:L,
	    v(i)=double(s(i))-48;
end;
