    if (write_pos == buf_size) fwrite(write_buf, 1, buf_size, stdout), write_pos = 0;
