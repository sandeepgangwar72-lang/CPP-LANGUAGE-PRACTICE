$drive = Get-PSDrive C
$freeSpace = $drive.Free / 1GB

if ($freeSpace -gt 40) {
    Write-Host "C: drive has more than 10 GB free space"
}
else {
    Write-Host "C: drive has less than or equal to 10 GB free space"
}