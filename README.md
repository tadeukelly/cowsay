# cowsay
Cowsay! (an example of minimal Dockerization)

This is a minimal docker image based on docker scratch image with the addition of a C program rewriting the famous COWSAY Unix/Linux program.

It is a great example of how to deploy a binary code within your images.

It has a tiny size of just 909Kb

This is how to use it:

<pre>docker run cowsay Frank Underwood</pre>

Dockerfile content:
<pre>
FROM scratch
ADD cowsay /
ENTRYPOINT ["/cowsay"]
CMD ["default_cmd"]
</pre>



