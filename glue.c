// 0x540B
// 0x5407
int
tcflush (int fd, int queue_selector)
{
  return ioctl (fd, 0x5401, queue_selector);
}
