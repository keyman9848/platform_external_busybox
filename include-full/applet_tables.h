/* This is a generated file, don't edit */

#define NUM_APPLETS 219

const char applet_names[] ALIGN1 = ""
"[" "\0"
"[[" "\0"
"arp" "\0"
"ash" "\0"
"awk" "\0"
"base64" "\0"
"basename" "\0"
"bbconfig" "\0"
"blockdev" "\0"
"brctl" "\0"
"bunzip2" "\0"
"bzcat" "\0"
"bzip2" "\0"
"cal" "\0"
"cat" "\0"
"catv" "\0"
"chattr" "\0"
"chgrp" "\0"
"chmod" "\0"
"chown" "\0"
"chroot" "\0"
"chvt" "\0"
"clear" "\0"
"cmp" "\0"
"comm" "\0"
"cp" "\0"
"cpio" "\0"
"crond" "\0"
"crontab" "\0"
"cut" "\0"
"date" "\0"
"dc" "\0"
"dd" "\0"
"deallocvt" "\0"
"depmod" "\0"
"devmem" "\0"
"df" "\0"
"diff" "\0"
"dirname" "\0"
"dmesg" "\0"
"dnsd" "\0"
"dos2unix" "\0"
"du" "\0"
"echo" "\0"
"ed" "\0"
"egrep" "\0"
"env" "\0"
"expand" "\0"
"expr" "\0"
"false" "\0"
"fdisk" "\0"
"fgrep" "\0"
"find" "\0"
"findfs" "\0"
"flash_lock" "\0"
"flash_unlock" "\0"
"flashcp" "\0"
"flock" "\0"
"fold" "\0"
"free" "\0"
"freeramdisk" "\0"
"fsync" "\0"
"ftpget" "\0"
"ftpput" "\0"
"fuser" "\0"
"getopt" "\0"
"grep" "\0"
"groups" "\0"
"gunzip" "\0"
"gzip" "\0"
"halt" "\0"
"head" "\0"
"hexdump" "\0"
"id" "\0"
"ifconfig" "\0"
"insmod" "\0"
"install" "\0"
"iostat" "\0"
"ip" "\0"
"kill" "\0"
"killall" "\0"
"killall5" "\0"
"less" "\0"
"ln" "\0"
"losetup" "\0"
"ls" "\0"
"lsattr" "\0"
"lsmod" "\0"
"lspci" "\0"
"lsusb" "\0"
"lzcat" "\0"
"lzma" "\0"
"lzop" "\0"
"lzopcat" "\0"
"man" "\0"
"md5sum" "\0"
"mdev" "\0"
"mesg" "\0"
"mkdir" "\0"
"mkdosfs" "\0"
"mke2fs" "\0"
"mkfifo" "\0"
"mkfs.ext2" "\0"
"mkfs.vfat" "\0"
"mknod" "\0"
"mkswap" "\0"
"mktemp" "\0"
"modinfo" "\0"
"modprobe" "\0"
"more" "\0"
"mount" "\0"
"mountpoint" "\0"
"mpstat" "\0"
"mv" "\0"
"nanddump" "\0"
"nandwrite" "\0"
"nbd-client" "\0"
"nc" "\0"
"netstat" "\0"
"nice" "\0"
"nohup" "\0"
"nslookup" "\0"
"ntpd" "\0"
"od" "\0"
"openvt" "\0"
"patch" "\0"
"pgrep" "\0"
"pidof" "\0"
"ping" "\0"
"pipe_progress" "\0"
"pkill" "\0"
"pmap" "\0"
"poweroff" "\0"
"printenv" "\0"
"printf" "\0"
"ps" "\0"
"pstree" "\0"
"pwd" "\0"
"pwdx" "\0"
"rdev" "\0"
"readlink" "\0"
"realpath" "\0"
"reboot" "\0"
"renice" "\0"
"reset" "\0"
"resize" "\0"
"rev" "\0"
"rm" "\0"
"rmdir" "\0"
"rmmod" "\0"
"route" "\0"
"run-parts" "\0"
"rx" "\0"
"sed" "\0"
"seq" "\0"
"setconsole" "\0"
"setkeycodes" "\0"
"setserial" "\0"
"setsid" "\0"
"sh" "\0"
"sha1sum" "\0"
"sha256sum" "\0"
"sha512sum" "\0"
"sleep" "\0"
"sort" "\0"
"split" "\0"
"stat" "\0"
"strings" "\0"
"stty" "\0"
"sum" "\0"
"swapoff" "\0"
"swapon" "\0"
"switch_root" "\0"
"sync" "\0"
"sysctl" "\0"
"tac" "\0"
"tail" "\0"
"tar" "\0"
"tee" "\0"
"telnet" "\0"
"telnetd" "\0"
"test" "\0"
"tftp" "\0"
"tftpd" "\0"
"time" "\0"
"timeout" "\0"
"top" "\0"
"touch" "\0"
"tr" "\0"
"traceroute" "\0"
"true" "\0"
"tty" "\0"
"ttysize" "\0"
"tune2fs" "\0"
"umount" "\0"
"uname" "\0"
"uncompress" "\0"
"unexpand" "\0"
"uniq" "\0"
"unix2dos" "\0"
"unlzma" "\0"
"unlzop" "\0"
"unxz" "\0"
"unzip" "\0"
"uptime" "\0"
"usleep" "\0"
"uudecode" "\0"
"uuencode" "\0"
"vi" "\0"
"watch" "\0"
"wc" "\0"
"wget" "\0"
"which" "\0"
"whoami" "\0"
"xargs" "\0"
"xz" "\0"
"xzcat" "\0"
"yes" "\0"
"zcat" "\0"
;

#ifndef SKIP_applet_main
int (*const applet_main[])(int argc, char **argv) = {
test_main,
test_main,
arp_main,
ash_main,
awk_main,
base64_main,
basename_main,
bbconfig_main,
blockdev_main,
brctl_main,
bunzip2_main,
bunzip2_main,
bzip2_main,
cal_main,
cat_main,
catv_main,
chattr_main,
chgrp_main,
chmod_main,
chown_main,
chroot_main,
chvt_main,
clear_main,
cmp_main,
comm_main,
cp_main,
cpio_main,
crond_main,
crontab_main,
cut_main,
date_main,
dc_main,
dd_main,
deallocvt_main,
depmod_main,
devmem_main,
df_main,
diff_main,
dirname_main,
dmesg_main,
dnsd_main,
dos2unix_main,
du_main,
echo_main,
ed_main,
grep_main,
env_main,
expand_main,
expr_main,
false_main,
fdisk_main,
grep_main,
find_main,
findfs_main,
flash_lock_unlock_main,
flash_lock_unlock_main,
flashcp_main,
flock_main,
fold_main,
free_main,
freeramdisk_main,
fsync_main,
ftpgetput_main,
ftpgetput_main,
fuser_main,
getopt_main,
grep_main,
id_main,
gunzip_main,
gzip_main,
halt_main,
head_main,
hexdump_main,
id_main,
ifconfig_main,
insmod_main,
install_main,
iostat_main,
ip_main,
kill_main,
kill_main,
kill_main,
less_main,
ln_main,
losetup_main,
ls_main,
lsattr_main,
lsmod_main,
lspci_main,
lsusb_main,
unlzma_main,
unlzma_main,
lzop_main,
lzop_main,
man_main,
md5_sha1_sum_main,
mdev_main,
mesg_main,
mkdir_main,
mkfs_vfat_main,
mkfs_ext2_main,
mkfifo_main,
mkfs_ext2_main,
mkfs_vfat_main,
mknod_main,
mkswap_main,
mktemp_main,
modinfo_main,
modprobe_main,
more_main,
mount_main,
mountpoint_main,
mpstat_main,
mv_main,
nandwrite_main,
nandwrite_main,
nbdclient_main,
nc_main,
netstat_main,
nice_main,
nohup_main,
nslookup_main,
ntpd_main,
od_main,
openvt_main,
patch_main,
pgrep_main,
pidof_main,
ping_main,
pipe_progress_main,
pgrep_main,
pmap_main,
halt_main,
printenv_main,
printf_main,
ps_main,
pstree_main,
pwd_main,
pwdx_main,
rdev_main,
readlink_main,
realpath_main,
halt_main,
renice_main,
reset_main,
resize_main,
rev_main,
rm_main,
rmdir_main,
rmmod_main,
route_main,
run_parts_main,
rx_main,
sed_main,
seq_main,
setconsole_main,
setkeycodes_main,
setserial_main,
setsid_main,
ash_main,
md5_sha1_sum_main,
md5_sha1_sum_main,
md5_sha1_sum_main,
sleep_main,
sort_main,
split_main,
stat_main,
strings_main,
stty_main,
sum_main,
swap_on_off_main,
swap_on_off_main,
switch_root_main,
sync_main,
sysctl_main,
tac_main,
tail_main,
tar_main,
tee_main,
telnet_main,
telnetd_main,
test_main,
tftp_main,
tftpd_main,
time_main,
timeout_main,
top_main,
touch_main,
tr_main,
traceroute_main,
true_main,
tty_main,
ttysize_main,
tune2fs_main,
umount_main,
uname_main,
uncompress_main,
expand_main,
uniq_main,
dos2unix_main,
unlzma_main,
lzop_main,
unxz_main,
unzip_main,
uptime_main,
usleep_main,
uudecode_main,
uuencode_main,
vi_main,
watch_main,
wc_main,
wget_main,
which_main,
whoami_main,
xargs_main,
unxz_main,
unxz_main,
yes_main,
gunzip_main,
};
#endif

const uint16_t applet_nameofs[] ALIGN2 = {
0x0000,
0x0002,
0x0005,
0x0009,
0x000d,
0x0011,
0x0018,
0x0021,
0x002a,
0x0033,
0x0039,
0x0041,
0x0047,
0x004d,
0x0051,
0x0055,
0x005a,
0x0061,
0x0067,
0x006d,
0x0073,
0x007a,
0x007f,
0x0085,
0x0089,
0x008e,
0x0091,
0x0096,
0x809c,
0x00a4,
0x00a8,
0x00ad,
0x00b0,
0x00b3,
0x00bd,
0x00c4,
0x00cb,
0x00ce,
0x00d3,
0x00db,
0x00e1,
0x00e6,
0x00ef,
0x00f2,
0x00f7,
0x00fa,
0x0100,
0x0104,
0x010b,
0x0110,
0x0116,
0x011c,
0x0122,
0x4127,
0x012e,
0x0139,
0x0146,
0x014e,
0x0154,
0x0159,
0x015e,
0x016a,
0x0170,
0x0177,
0x017e,
0x0184,
0x018b,
0x0190,
0x0197,
0x019e,
0x01a3,
0x01a8,
0x01ad,
0x01b5,
0x01b8,
0x01c1,
0x01c8,
0x01d0,
0x01d7,
0x01da,
0x01df,
0x01e7,
0x01f0,
0x01f5,
0x01f8,
0x0200,
0x0203,
0x020a,
0x0210,
0x0216,
0x021c,
0x0222,
0x0227,
0x022c,
0x0234,
0x0238,
0x023f,
0x0244,
0x0249,
0x024f,
0x0257,
0x025e,
0x0265,
0x026f,
0x0279,
0x027f,
0x0286,
0x028d,
0x0295,
0x029e,
0x02a3,
0x02a9,
0x02b4,
0x02bb,
0x02be,
0x02c7,
0x02d1,
0x02dc,
0x02df,
0x02e7,
0x02ec,
0x02f2,
0x02fb,
0x0300,
0x0303,
0x030a,
0x0310,
0x0316,
0x431c,
0x0321,
0x032f,
0x0335,
0x033a,
0x0343,
0x034c,
0x0353,
0x0356,
0x035d,
0x0361,
0x0366,
0x036b,
0x0374,
0x037d,
0x0384,
0x038b,
0x0391,
0x0398,
0x039c,
0x039f,
0x03a5,
0x03ab,
0x03b1,
0x03bb,
0x03be,
0x03c2,
0x03c6,
0x03d1,
0x03dd,
0x03e7,
0x03ee,
0x03f1,
0x03f9,
0x0403,
0x040d,
0x0413,
0x0418,
0x041e,
0x0423,
0x042b,
0x0430,
0x0434,
0x043c,
0x0443,
0x044f,
0x0454,
0x045b,
0x045f,
0x0464,
0x0468,
0x046c,
0x0473,
0x047b,
0x0480,
0x0485,
0x048b,
0x0490,
0x0498,
0x049c,
0x04a2,
0x44a5,
0x04b0,
0x04b5,
0x04b9,
0x04c1,
0x04c9,
0x04d0,
0x04d6,
0x04e1,
0x04ea,
0x04ef,
0x04f8,
0x04ff,
0x0506,
0x050b,
0x0511,
0x0518,
0x051f,
0x0528,
0x0531,
0x0534,
0x053a,
0x053d,
0x0542,
0x0548,
0x054f,
0x0555,
0x0558,
0x055e,
0x0562,
};


#define MAX_APPLET_NAME_LEN 13
